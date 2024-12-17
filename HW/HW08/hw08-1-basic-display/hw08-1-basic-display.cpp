/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/

#include <stdio.h>

int main() {
    int num = 0, number[99], sum = 0 ;
    float avg = 0 ;
    printf( "Enter value n : " ) ;
    scanf( "%d", &num ) ;
    for (int i = 0 ; i < num ; i++ ) {
    printf( "Enter value %d : ", i + 1 ) ;
    scanf( "%d" ,&number[i] ) ;
    sum += number[i] ;
    }//end for
    avg = (float)sum / num ;
    printf( "SUM = %d", sum ) ;
    printf( "Avg = %.2f", avg ) ;

}//end function