#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;
int main() {
    char text[ 50 ] = "The quick  brown    fox" ;
    char *out ;
    out = reverse( text ) ;
    printf( "\n %s \n", out ) ;

    return 0 ;
}//end function

char *reverse( char str1[] ) {
    char *out = new char[20] ;
    int counts = strlen( str1 ) ;
    for ( int i = 0 ; i < counts ; i++ )
    {
        out[i] = str1[counts - i - 1]  ;    
    }//end for
    out[counts] = '\0' ;
    printf( "\n" ) ;
    return out ;
}//end function