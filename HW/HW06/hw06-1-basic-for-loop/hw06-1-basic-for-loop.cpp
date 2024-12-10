/*
    ผู้ใช้กรอกจำนวนตัวเลข เพื่อพิมพ์คำว่า "Hello World" ตามจำนวนบรรทัดที่ผู้ใช้กรอก
    หากผู้ใช้กรอกเลขคี่ ให้แสดงเลขบรรทัดโดยใช้ []
    หากผู้ใช้กรอกเลขคู่ ให้แสดงเลขบรรทัดโดยใช้ ()
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        10
    Output:
        (1) Hello World
        (2) Hello World
        (3) Hello World
        (4) Hello World
        (5) Hello World
        (6) Hello World
        (7) Hello World
        (8) Hello World
        (9) Hello World
        (10) Hello World

    Test case:
        7
    Output:
        [1] Hello World
        [2] Hello World
        [3] Hello World
        [4] Hello World
        [5] Hello World
        [6] Hello World
        [7] Hello World

*/

#include <stdio.h>

int main() {
    int loops = 0 ;

    printf( "input loops : " ) ;
    scanf( "%d", &loops ) ;

    if ( loops % 2 != 0) {
        for (int i = 0 ; i < loops ; i++ )
        {
            printf( "[%d] Hello World\n", i + 1 ) ;
        }//end for
    } else if ( loops % 2 == 0 )
    {
        for (int i = 0 ; i < loops ; i++ )
        {
            printf( "(%d) Hello World\n", i + 1 ) ;
        }//end for
    }//end if
}//end function
