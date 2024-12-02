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
        }//end for
        printf( "\n" ) ;
    }//end for
    free( data ) ; // คืนหน่วยความจำ
    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    char entercheck ;
    // รับจำนวนแถวและคอลัมน์จากผู้ใช้
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    if ( *row == 0 && *col ==  0 )
    {
        printf( "Matrix: \n(empty)\n" ) ;
        exit( 1 ) ;
    }else if ( *row == 0 || *col == 0) {
        printf( "Error: Invalid matrix dimensions." ) ;
        exit( 1 ) ;
    }else {
    // malloc
        *value = ( int * )malloc( ( *row ) * ( *col ) * sizeof( int ) ) ; //sizeof( int ) = 4 ไบต์ 
        // รับค่า
        printf( "Enter the matrix elements: " ) ;
        for ( int i = 0 ; i < ( *row ) * ( *col ) ; i++ ) { // max i = ( (*row) * (*col) ) - 1 
            scanf( "%d", &(*value)[i] ) ;
            entercheck = getchar() ; //เชค enter
            if ( entercheck == '\n' && i != ( *row ) * ( *col ) - 1 ) {
                printf( "Error: Incorrect number of elements." ) ;
                exit( 1 ) ;
            }//end if 
        }//end for
    }//end if
    
    
 

}//end function
