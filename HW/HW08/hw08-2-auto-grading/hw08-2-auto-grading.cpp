/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming 
    ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , 
    C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/
#include<stdio.h>

int main() {
    int score ;

    printf( "Enter score: " ) ;
    scanf( "%d", &score ) ;
    char grade[20] = { 'A', 'B', 'C', 'D', 'F', '+', '\n' } ;
        for (int j = score ; j < 50 ; j++ ) {
            printf( "%c ", grade[4] ) ;
            break ;
        }
        for (int j = score ; j >= 50 && j < 55 ; j++ ) {
            printf( "%c ", grade[3] ) ;
            break ;
        }
        for (int j = score ; j >= 55 && j < 60 ; j++ ) {
            printf( "%c%c ", grade[3], grade[5] ) ;
            break ;
        }
        for (int j = score ; j >= 60 && j < 65 ; j++ ) {
            printf( "%c ", grade[2] ) ;
            break ;
        }
        for (int j = score ; j >= 65 && j < 70 ; j++ ) {
            printf( "%c%c ", grade[2], grade[5] ) ;
            break ;
        }
        for (int j = score ; j >= 70 && j < 75 ; j++ ) {
            printf( "%c ", grade[1] ) ;
            break ;
        }
        for (int j = score ; j >= 75 && j < 80 ; j++ ) {
            printf( "%c%c ", grade[1], grade[5] ) ;
            break ;
        }
        for (int j = score ; j >= 80  ; j++ ) {
            printf( "%c ", grade[0] ) ;
            break ;
        }
    printf( "!\n" ) ;
    return 0 ;
}
