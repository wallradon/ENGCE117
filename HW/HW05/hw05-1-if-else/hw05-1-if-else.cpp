/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/

#include<stdio.h>
#include<string.h>

int main() {
    char ch1, ch2, ch3, ch4 ;
    printf( "enter char :  " ) ;
    scanf( "%c %c %c %c", &ch1, &ch2, &ch3, &ch4 ) ;
    // int len = strlen(ch1) ;
    // printf( "lch = %d\n", len) ;
    if ( ch1 != NULL ) {
        printf( "%c %c %c %c", ch4, ch3, ch2, ch1 ) ;
    }
}//end function