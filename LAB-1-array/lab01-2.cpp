#include <stdio.h>
#include <string.h>

void GetSet( int data[], int *num ) ;

int main() {
    // int *data, num ;
    int data[100], num = 0 ;
    printf( "Input N: " ) ; 
    scanf( "%d", &num ) ; //รับค่า num
    GetSet( data, &num ) ;

    return 0 ;
}

void GetSet( int data[], int *num ) {
    printf( "\n-------------------\n" ) ;
    printf( "Num = %d\n", *num ) ;

    // รับค่าลงใน array
    printf( "Enter %d numbers: ", *num ) ;

    for ( int i = 0 ; i < *num; i++ ) {
        scanf( "%d", &data[i] ) ;  // รับค่าทีละตัว
    }//end for

    
    printf("\nEntered data: \n"); 
    for (int i = 0; i < *num; i++) { // แสดงค่า array
        printf("data[%d] = %d\n", i, data[i]);
    }
}
