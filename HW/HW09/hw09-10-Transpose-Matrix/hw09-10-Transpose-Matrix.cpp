#include <stdio.h>

int main() {
    int rows, cols ;
    // รับขนาดของอาเรย์
    printf( "Array element :\n" ) ;
    printf( "Enter number of rows: " ) ;
    scanf( "%d", &rows ) ;
    printf( "Enter number of columns: " ) ;
    scanf("%d", &cols ) ;

    int arr[rows][cols], transpose[cols][rows];

    // รับค่าลงในอาเรย์
    printf( "Input :\n" ) ;
    for ( int i = 0 ; i < rows ; i++ ) {
        for ( int j = 0 ; j < cols ; j++ ) {
            scanf( "%d", &arr[i][j] ) ;
        }
    }

    // แสดงอาเรย์ก่อนทำ Transpose
    printf( "Array\n" ) ;
    for ( int i = 0 ; i < rows ; i++ ) {
        for ( int j = 0 ; j < cols ; j++ ) {
            printf( "%d ", arr[i][j] ) ;
        }
        printf( "\n" ) ;
    }

    // ทำการ Transpose ของอาเรย์
    for ( int i = 0 ; i < rows ; i++ ) {
        for ( int j = 0 ; j < cols ; j++ ) {
            transpose[j][i] = arr[i][j] ;
        }
    }

    // แสดงอาเรย์ที่ทำ Transpose
    printf( "Array Transpose\n" ) ;
    for ( int i = 0; i < cols; i++ ) {
        for ( int j = 0 ; j < rows ; j++ ) {
            printf( "%d ", transpose[i][j] ) ;
        }
        printf( "\n" ) ;
    }

    return 0 ;
}



