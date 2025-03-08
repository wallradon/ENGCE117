/*เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ 
เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด*/
#include <stdio.h>
struct student {
    char name[ 20 ] ;
    int age ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room ) {
    printf( "Enter number of room : " ) ;
    scanf( "%d", room ) ;
    for ( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d:\n", i + 1 ) ;
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d ", j + 1 ) ;
            scanf( "%s", child[i][j].name ) ;
            scanf( "%d", &child[i][j].age ) ;
        }//end for
    }
    printf( "Out put\n") ;
    for ( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d: 10 students entered.\n", i + 1 ) ;
    }//end for
    
}//end function