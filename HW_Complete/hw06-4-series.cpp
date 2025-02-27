/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 
    9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/

#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number of terms: " ) ;
    scanf( "%d", &num ) ;

    int sum = 0 ;
    int term = 0 ;
    printf( "\nSeries = " ) ;
    for ( int i = 1 ; i <= num ; i++ ) {
        term = term * 10 + 9 ;
        if ( i < num ) {
            printf( "%d + ", term ) ;
        }else{
            printf( "%d ", term ) ;
        }//end if
        sum += term ;
    }//end for

    printf( "\nSum =  %d\n", sum ) ;
    return 0 ;
}//end function
