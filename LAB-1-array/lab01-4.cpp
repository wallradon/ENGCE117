
/* 
    Enter the number of elements: 3
    Enter the elements: 10 20 30

    Number of elements: 3
    10 20 30    

    Enter the number of elements: 4
    Enter the elements: 7 14 21 28

    Number of elements: 4
    7 14 21 28  
*/

#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int data[100], num ;
    num = GetSet( data ) ;
    // printf( "Num in main = %d", num ) ;
    return 0 ;
}//end function

int GetSet( int data[] ) {
    int num ;
    
    printf( "Enter the number of elements: " ) ; // รับจำนวน index
    scanf( "%d", &num ) ;
    data[num] ;
    printf( "Enter the elements: " ) ; // รับค่าในarray
    for ( int i = 0 ; i < num; i++ ) {
        scanf( "%d", &data[i] ) ;
    }

    printf( "\nNumber of elements: %d \n", num ) ;
    for (int n = 0 ; n < num ; n++ ) {
        printf("%d ", data[ n ] ) ;
    }//end for
    printf( "\n\n" ) ;
    return num ;  
}//end function