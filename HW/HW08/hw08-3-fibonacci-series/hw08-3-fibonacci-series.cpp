/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน 
    (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/
#include <stdio.h>

int main() {
    int n;
    printf( "Enter number : " ) ;
    scanf( "%d", &n ) ;

    int first = 1, second = 1, next, sum = 0 ; 

    printf( "Series = " ) ;
    for ( int i = 1 ; i <= n; i++ ) {
        if ( i == 1 || i == 2 ) {
            next = 1 ; 
        } else {
            next = first + second ; 
            first = second ;        
            second = next ;        
        }//end if
        printf( "%d", next ) ; 
        sum += next ;        
        if ( i < n ) {
            printf(" + ") ; 
        }//end if
    }//end for

    printf( "\nSum = %d\n", sum ) ;

    return 0 ;
}//end function
