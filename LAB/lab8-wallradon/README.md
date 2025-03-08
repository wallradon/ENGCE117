## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเขียนโปรแกรมการจัดการไฟล์ และเขียนรายละเอียดของฟังก์ชันตามที่ Prototype ทั้งหมด เพื่อจัดการไฟล์ชื่อว่า `./output/customer.csv` โดยเฉพาะฟังก์ชันชื่อว่า SelectMode() ควรจะมีความสามารถดังต่อไปนี้
- 1 = ข้อมูลของคนที่ซื้อของที่ราคาแพงที่สุด
- 2 = จำนวนบรรทัดของไฟล์
- 3 = ราคาเฉลี่ยของสินค้า
- 4 = นับจำนวนคนที่มีอายุมากกว่าค่าเฉลี่ย
- 5 = สินค้าที่มีคนนิยมซื้่อมากที่สุด
- 6 = หมวดหมู่ที่มีคนนิยมซื้อน้อยที่สุด
- อื่นๆ = ออกจากโปรแกรม

## FIX CODE
```c++
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
        //YOUR CODE HERE
    } else if( Mode == 1 ) { //Who bought higest price
        //YOUR CODE HERE
    } else if( Mode == 2 ) { //Lines of file
        printf( "File data = %d records.\n", this->MaxCustomer ) ;
    } else if( Mode == 3 ) { //Average Price
        //YOUR CODE HERE
    } else if( Mode == 4 ) { //Count People who age above average.
        //YOUR CODE HERE
    } else if( Mode == 5 ) { //Most Popular Product
        //YOUR CODE HERE
    } else if( Mode == 6 ) { //Least Popular Product
        //YOUR CODE HERE
    } else {
        //YOUR CODE HERE
    }
}

FileHandler :: FileHandler( char FilePath[ 100 ] ) {
    strcpy( this->FilePath, FilePath ) ;
    this->ReadFile() ;
}

void FileHandler :: ReadFile() {
    //YOUR CODE HERE
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
    //YOUR CODE HERE
}

```

## TEST CASE
### Input
```bash
Select Mode : 1
Select Mode : 2
Select Mode : 3
Select Mode : 4
Select Mode : 5
Select Mode : 6
Select Mode : 7
```
### Output
```bash
--------| Who bought highest price.
Name     :  Laura    
Age      : 72  
Category : Toys      
Product  : Tshirt    
Price    : 580.00
File data = 56 records.
Average price = 347.27
Average age = 50.21.
People who aged above average = 35.
Most popular product = Tshirt (sold 8 times).
Least popular category = Books (sold 7 times).
Thank you!.
```
