#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Customer {
    public :
        char Name[20] ;
        int Age ;
        char Category[20] ;
        char Product[20] ;
        float Price ;
    public : 
        void GetCustomerInfo( char StrMode[ 50 ] ) ;
} ;

class FileHandler {
    public :
        FILE *fp ;
        char FilePath[ 100 ] ;
        Customer C[ 500 ] ;
        int MaxCustomer ;
    public :
        FileHandler( char FilePath[ 100 ] ) ;
        void GetFilePath() ;
        void ReadFile() ;
        void SelectMode() ;
} ;

int main() {
    FileHandler *F = new FileHandler( "customer.csv" ) ;
    while( 1 ) F->SelectMode() ;
    return 0;
}

void FileHandler :: SelectMode() {
    int Mode = 0 ;
    printf( "Select Mode : " ) ;
    scanf( "%d", &Mode ) ;
    if( Mode == 0 ) { //Exit
        printf("Thank you!.\n");
        exit(0);
    } else if( Mode == 1 ) { //Whso bought highest price
        float maxPrice = 0;
        int maxIndex = 0;
        for (int i = 0; i < MaxCustomer; i++) { 
            if (C[i].Price > maxPrice) {
                maxPrice = C[i].Price;
                maxIndex = i;
            }
        }
        C[maxIndex].GetCustomerInfo("Who bought highest price");
    } else if( Mode == 3 ) { //Average Price
        float total = 0;
        for (int i = 0; i < MaxCustomer; i++) { 
            total += C[i].Price;
        }
        printf("Average price = %.2f\n", total / MaxCustomer);
    } else if( Mode == 4 ) { //Count People who age above average
        float totalAge = 0;
        for (int i = 0; i < MaxCustomer; i++) {
            totalAge += C[i].Age;
        }
        float avgAge = totalAge / MaxCustomer;

        int countAboveAvg = 0;
        for (int i = 0; i < MaxCustomer; i++) { 
            if (C[i].Age > avgAge) countAboveAvg++;
        }

        printf("Average age = %.2f.\n", avgAge);
        printf("People who aged above average = %d.\n", countAboveAvg);
    } else if( Mode == 5 ) { //Most Popular Product
        char mostProduct[20];
        int maxCount = 0;
        for (int i = 0; i < MaxCustomer; i++) {
            int count = 0;
            for (int j = 0; j < MaxCustomer; j++) {
                if (strcmp(C[i].Product, C[j].Product) == 0) count++;
            }
            if (count > maxCount) { 
                maxCount = count;
                strcpy(mostProduct, C[i].Product);
            }
        }
        printf("Most popular product = %s (sold %d times).\n", mostProduct, maxCount);
    } else if( Mode == 6 ) { //Least Popular Product
        char leastCategory[20];
        int minCount = MaxCustomer;
        for (int i = 0; i < MaxCustomer; i++) {
            int count = 0;
            for (int j = 0; j < MaxCustomer; j++) {
                if (strcmp(C[i].Category, C[j].Category) == 0) count++;
            }
            if (count < minCount) {
                minCount = count;
                strcpy(leastCategory, C[i].Category);
            }
        }
        printf("Least popular category = %s (sold %d times).\n", leastCategory, minCount);
    } else {
        printf("Invalid mode. Exiting program.\n");
        exit(0);
    }

}

FileHandler :: FileHandler( char FilePath[ 100 ] ) {
    strcpy( this->FilePath, FilePath ) ;
    this->ReadFile() ;
}

void FileHandler :: ReadFile() {
    fp = fopen("./output/customer.csv", "r");
    fp = fopen("customer.csv", "r");
    if (fp == NULL) { 
        printf("Error opening file.\n");
        exit(1);
    }

    this->MaxCustomer = 0; 
    while (fscanf(fp, "%19[^,],%d,%19[^,],%19[^,],%f\n",
              C[this->MaxCustomer].Name, 
              &C[this->MaxCustomer].Age, 
              C[this->MaxCustomer].Category, 
              C[this->MaxCustomer].Product, 
              &C[this->MaxCustomer].Price) == 5) { 
        this->MaxCustomer++;
    }

    fclose(fp);
}

void Customer :: GetCustomerInfo( char StrMode[ 50 ] ) {
    printf( "--------| %-8s\n", StrMode ) ;
    printf("%-8s : %-10s\n", "Name", this->Name ) ; 
    printf("%-8s : %-4d\n", "Age", this->Age ) ;
    printf("%-8s : %-10s\n", "Category", this->Category ) ; 
    printf("%-8s : %-10s\n", "Product", this->Product ) ; 
    printf("%-8s : %-5.2f\n", "Price", this->Price ) ; 
}

void FileHandler :: GetFilePath() {
    printf("Current File Path: %s\n", this->FilePath);
}