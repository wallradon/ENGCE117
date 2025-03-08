/*
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() 
เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ด  ตามโปรโตไทป์ต่อไปนี้
#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

    int main() {
        int *data, m, n ;
        GetMatrix( &data, &m, &n ) ;
        return 0 ;
    }//end function
*/

#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int data[99], m = 0, n = 0  ;
    GetMatrix( data, &m, &n ) ;

    printf("Matrix_data:\n");
    for ( int i = 0; i < m; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            printf( "%d ", data[i * n + j] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function

void GetMatrix( int *value, int *row, int *col ) {
    printf( "how many rows, cols : " ) ;
    scanf( "%d %d", row, col ) ;
    printf( "Enter matrix values:\n" ) ;
        for ( int i = 0 ; i < (*row) * (*col) ; i++ ) 
            scanf( "%d", &value[i] ) ;
    printf("Matrix_val:\n");
    for ( int n = 0 ; n < *row ; n++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            printf( "%d ", value[n * (*row) + j ] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for
}//end function