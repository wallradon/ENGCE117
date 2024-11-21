/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>
#include <string.h>

int main() {

    char firstname[20], lastname[20] ;
    // char firstname, lastname ;

    printf( "First Name: " ) ;
    scanf( "%s", firstname ) ;
    printf( "Last Name: " ) ;
    scanf( "%s", lastname ) ;

    printf( "%s %s TC, RMUTL, Chiang Mai, Thailand", firstname, lastname ) ;

}