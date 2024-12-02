/*เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() 
เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ด  ตามโปรโตไทป์ต่อไปนี้*/

#include <stdio.h>
#include <stdlib.h> //  malloc , free

void GetMatrix( int *value[], int *row, int *col ) ;

int main() {
    int *data, m = 0, n = 0 ;//m=row,n=col
    GetMatrix( &data, &m, &n ) ;
    printf( "Matrix (%dx%d):\n", m, n ) ;
    for ( int i = 0 ; i < m ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[i * n + j] ) ;
        }
        printf( "\n" ) ;
    }//end for
    free( data ) ; // คืนหน่วยความจำ
    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    // รับจำนวนแถวและคอลัมน์จากผู้ใช้
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    // malloc
    *value = ( int * )malloc( ( *row ) * ( *col ) * sizeof( int ) ) ; //sizeof( int ) = 4 ไบต์
    printf("*value = %p\n", *value); 
    // รับค่าของสมาชิกในเมทริกซ์จากผู้ใช้ในครั้งเดียว
    printf( "Enter the matrix elements: " ) ;
    for ( int i = 0 ; i < (*row) * (*col) ; i++ ) { // max i = ( (*row) * (*col) ) - 1 
        scanf("%d", & *value[i]  ) ;
    }

}//end function