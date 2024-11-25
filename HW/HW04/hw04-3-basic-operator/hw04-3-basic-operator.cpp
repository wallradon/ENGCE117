/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>
int main() {
    int number1 = 0, number2 = 0, number3 = 0, sum = 0 ;
    printf( "Please enter a number : " ) ;
    scanf( "%d %d %d", &number1, &number2, &number3 ) ;
    sum = number1 + number2 + number3 ;
    printf( "Answer = %d", sum) ;
}//end function