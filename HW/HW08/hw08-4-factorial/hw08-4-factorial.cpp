/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial 
    โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 120

*/

#include <stdio.h>

int main() {
    int n = 0, i = 0, sum = 1 ;
    printf( "enter N : " ) ;
    scanf( "%d",&n ) ;
    printf( "%d! =",n ) ;
    i = n ;
    while ( i > 0 ) {
        sum *= i ;
        printf( " %d ", i ) ;
        if ( i > 1 ) {
            printf( "x" ) ;
        }//end if
        i-- ;
    }//end while
    printf( "\n%d! = %d ", n, sum ) ;
    
    return 0 ;
}//end function
