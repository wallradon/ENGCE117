#include <stdio.h>
int main() {
    int num = 0 ;
    printf( "input : " ) ;
    scanf( "%d", &num ) ;   
    for (int i = 0 ; i < num ; i++)
    {
        printf( "[%d] Hello world\n", i + 1 ) ;
    } //end for
    return 0 ;
}//end function