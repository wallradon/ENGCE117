/* 
    Enter the number of elements: 3
    Enter the elements: 10 20 30

    Number of elements: 3
    10 20 30    

    Enter the number of elements: 4
    Enter the elements: 7 14 21 28

    Number of elements: 4
    7 14 21 28  

    #include <stdio.h>

    int GetSet( int [] ) ;

    int main() {
        int *data, num ;
        num = GetSet( &data ) ;
        return 0 ;
    }//end function
*/

#include <stdio.h>

int GetSet( int data[] ) ;

int main() {
    int data[100], num = 0 ;
    printf( "num = %d\n", num ) ;
    num = GetSet( data ) ;
    printf( "-------------------\nNum in main = %d", num ) ;
    printf( "\nout : \n", num ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }//end for
    
    return 0 ;
}//end function

int GetSet( int data[] ) {
    int num ;
    printf( "Enter the number of elements: " ) ; 
    scanf( "%d", &num ) ;
    printf( "Enter the elements: " ) ; 
    for ( int i = 0 ; i < num; i++ ) {
        scanf( "%d", &data[i] ) ;
    }//end for
    printf( "\nNumber of elements_inFN: %d \n", num ) ;
    for (int j = 0 ; j < num ; j++ ) {
        printf( "%d ", data[j] ) ;
    }//end for
    printf( "\n\n" ) ;
    return num ;  
}//end function