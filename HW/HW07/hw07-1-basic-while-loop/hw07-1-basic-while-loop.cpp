#include<stdio.h>

int main() {
    int num = 0, i = 1 ;
    printf( "enter num : " ) ;
    scanf( "%d", &num ) ;

    if ( num % 2 == 0) {
        while ( i <= num) {
            printf( "(%d) Hello World \n", i ) ;
            i++ ;
        }
    }else if ( num % 2 == 1 ) {
        while ( i <= num) {
            printf( "[%d] Hello World \n", i ) ;
            i++ ;
        }
    }
    num = 0 ;
    i = 1 ;    
}//end function