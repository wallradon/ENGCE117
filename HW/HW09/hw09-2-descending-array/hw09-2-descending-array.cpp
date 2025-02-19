/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1
*/

#include<stdio.h>

int main() {
    int num[100], n = 8, i, j, temp ;

    // กำหนดค่าตัวอย่างในอาเรย์
    num[0] = 1 ;
    num[1] = 5 ;
    num[2] = 1 ;
    num[3] = 4 ;
    num[4] = 6 ;
    num[5] = 9 ;
    num[6] = 13 ;
    num[7] = -1 ;

    printf("Input: ");
    for(i = 0; i < n; i++) {
        printf( "%d ", num[i] ) ;
    }
    printf( "\n" ) ;

    // เรียงจากน้อยไปมาก (Ascending Order)
    for( i = 0; i < n - 1; i++ ) {
        for( j = i + 1; j < n; j++ ) {
            if( num[i] > num[j] && num[i] != -1 && num[j] != -1 ) {
                // Swap
                temp = num[i] ;
                num[i] = num[j] ;
                num[j] = temp ;
            }
        }
    }

    // แสดงผลจากน้อยไปมาก
    printf( "0-99: " ) ;
    for( i = 0; i < n; i++ ) {
        if( num[i] != -1 ) {  // แสดงเฉพาะค่าที่ไม่ใช่ -1
            printf( "%d ", num[i] ) ;
        }
    }
    printf("\n") ;

    // เรียงจากมากไปน้อย (Descending Order)
    for( i = 0; i < n - 1; i++ ) {
        for( j = i + 1; j < n; j++ ) {
            if( num[i] < num[j] && num[i] != -1 && num[j] != -1 ) {
                // Swap
                temp = num[i] ;
                num[i] = num[j] ;
                num[j] = temp ;
            }
        }
    }

    // แสดงผลจากมากไปน้อย
    printf( "99-0: " ) ;
    for( i = 0; i < n; i++ ) {
        if( num[i] != -1 ) {  // แสดงเฉพาะค่าที่ไม่ใช่ -1
            printf( "%d ", num[i] ) ;
        }
    }
    printf( "\n" ) ;

    return 0 ;
}
