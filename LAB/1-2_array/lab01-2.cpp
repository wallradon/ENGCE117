// #include <stdio.h>
// #include <string.h>

// void GetSet( int [], int * ) ;

// int main() {
//      int *data, num ;
//      GetSet( &data, &num ) ;
//      return 0 ;
// }//end function
#include <stdio.h>
#include <string.h>

void GetSet( int data[], int *num ) ;

int main() {
    // int *data, num ;
    int data[100], num = 0 ;
    printf( "Input N: " ) ; 
    scanf( "%d", &num ) ; //รับค่า num
    GetSet( data, &num ) ;

    for ( int i = 0 ; i < num ; i++ )  // แสดงค่า
        printf( "data_in_main[%d] = %d\n", i, data[i] ) ; //end for
    return 0 ;
}//end function

void GetSet( int data[], int *num ) {
    printf( "\n--------GetSet----------\n" ) ;
    printf( "Num = %d\n", *num ) ;

    // รับค่าลงใน array
    printf( "Enter %d numbers: ", *num ) ;

    for ( int i = 0 ; i < *num; i++ ) {
        scanf( "%d", &data[i] ) ;  // รับค่าทีละตัว
    }//end for

    
    // printf( "\noutput \n" ) ; 
    // for ( int i = 0 ; i < *num ; i++ ) { // แสดงค่า
    //     printf( "data[%d] = %d\n", i, data[i] ) ;  //end for

}//end GetSet function
