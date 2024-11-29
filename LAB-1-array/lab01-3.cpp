
/*
    จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() 
    เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้


    input
        Enter the number of elements: 3
        Enter the elements: 10 20 30
    output
        Number of elements: 3
        10 20 30
*/

#include <stdio.h>
int *GetSet( int * ) ;

int main() {
    int *data, num ;
    // printf( "Num in main = %d\n", num ) ; // แสดง num ก่อน
    data = GetSet( &num ) ; // ตือส่ง address ไปเชื่อมกัน pointer *num
    // printf( "Num in main = %d\n", num ) ; // แสดง num เปลี่ยนจาก *num

    return 0 ;
}//end function

int *GetSet( int *num ) {

    printf( "\n---------Getset Fn-------------\n" ) ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;
    int elements[*num] ;
    printf("Enter the elements: ");
    for (int i = 0; i < *num; i++) {
        scanf("%d", &elements[i]);  // รับค่าใช้ Spacebar เพื่อยืนยัน
    }
    printf( "\n---------output-------------\n" ) ;

    printf( "Number of elements: %d\n", *num ) ;
    for (int a = 0 ; a < *num ; a++ )
    {
        printf( "%d ", elements[a] ) ;
    }
    printf( "\n" ) ;
    
    // printf( "num in getSet : %d numAd : %d \n", &num, num ) ;

    // return num ;

}//end function