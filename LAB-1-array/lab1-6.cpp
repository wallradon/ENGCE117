/*เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ 
และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้
## TEST CASE
### Input

2 2
10 20
30 40

### Output

Enter number of rows and columns: 2 2
Enter matrix elements:
10 20
30 40

## TEST CASE
### Input
1 1
5

### Output
Enter number of rows and columns: 1 1
Enter matrix elements:
5
## TEST CASE

### Input

0 0

### Output

Enter number of rows and columns: 0 0


### Input

2 3
1 2 3
4 5


### Output

Error: Invalid matrix input


*/

// #include <stdio.h>
// int GetMatrix( int *row, int *col ) ;
// int main() {
//     int *data, m, n ;
//     data = GetMatrix( &m, &n ) ;
//     return 0 ;
// }//end function

#include <stdio.h>
#include <stdlib.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;

    // เรียกใช้ GetMatrix
    data = GetMatrix( &m, &n ) ;

    // แสดงผล matrix
    printf( "\n-------output-------\n" ) ;
    printf( "Enter number of rows and columns: %d %d \n", m, n ) ;
    printf( "Enter matrix elements: \n" ) ;
    for ( int i = 0 ; i < m ; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            printf( "%d ", data[i * n + j] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for

    // คืนหน่วยความจำ
    delete[] data ;

    return 0 ;
}//end function


int *GetMatrix( int *row, int *col ) {

    printf( "Enter number of rows & columns : " ) ;
    scanf( "%d %d", row, col ) ;

    if ( *row == 0 && *col == 0 )
    {
        printf( "Enter number of rows and columns: %d %d \n", *row, *col ) ;
        exit( 1 ) ;
    }//end if
    

    // จัดสรรหน่วยความจำด้วย new
    int *data = new int[ ( *row ) * ( *col ) ] ;

    // รับค่าจากผู้ใช้
    printf( "Enter matrix elements:\n" ) ;
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            // printf("a[%d][%d]: ", i, j);
            scanf( "%d", &data[ i * (*col) + j ] ) ;
            char entercheck = getchar() ;
            if ( entercheck == '\n' && j != *col - 1 ) {
                printf( "Error: Invalid matrix input\n" ) ;
                exit( 1 ) ;
            }//end if
        }//end for
    }//end for

    return data ;
}//end function
