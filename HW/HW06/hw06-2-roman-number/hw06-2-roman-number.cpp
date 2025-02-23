/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ;

    if ( num > 0 && num <= 3999 ) {
        printf( "%d = ", num ) ;

        int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1} ;
        const char* symbols[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"} ;

        for ( int i = 0; i < 13; i++ ) {
            while ( num >= values[i] ) { 
                printf( "%s", symbols[i] ) ;
                num -= values[i] ; 
            }//end while
        }//end for

        printf( "\n" ) ;
    } else {
        printf( "ERROR\n" ) ;
    }//end if

    return 0 ;
}//end function
