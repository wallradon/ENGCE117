/*
    รับค่า Array จากผู้ใช้มา 2 ค่า และเติมค่าในอาเรย์ให้เต็มทั้ง 2 ค่า 
    นั้นนั้นทำ Array1 มาคูณกับ Array2 แบบ Matrix (คุณสามารถหาข้อมูลการคูณ Matrix 
    เพิ่มเติมได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=Gocc4CriZdA)
    
    Test case:
        Array1 Value : 
            2 5
        Array1 element :
            2 5 3 8 3
            2 5 3 1 1
        Array2 Value : 
            5 2
        Array2 element :
            2 3
            4 4
            1 2
            1 1
            2 3
    Output:
        Array1
            2 5 3 8 3
            2 5 3 1 1
        Array2
            2 3
            4 4
            1 2
            1 1
            2 3
        Array1 x Array2
            41 49
            30 36

*/

#include <stdio.h>

int main() {
    int row1, col1, row2, col2 ;
    
    printf( "Enter size of Array1 (row x column): " ) ;
    scanf( "%d %d", &row1, &col1 ) ;

    int Array1[row1][col1] ;

    printf( "Enter elements of Array1:\n" );
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &Array1[i][j]);
        }//end for
    }//end for
    
    printf( "Enter size of Array2 (row x column): " ) ;
    scanf( "%d %d", &row2, &col2 ) ;

    int Array2[row2][col2] ; 
    printf("Enter elements of Array2:\n");
    for ( int i = 0; i < row2; i++ ) {
        for ( int j = 0; j < col2; j++ ) {
            scanf("%d", &Array2[i][j] ) ;
        }//end for
    }//end for
    
    int result[row1][col2] ;

    for ( int i = 0 ; i < row1 ; i++ ) {
        for ( int j = 0 ; j < col2 ; j++ ) {
            result[i][j] = 0 ; 
            for ( int k = 0 ; k < col1 ; k++ ) {
                result[i][j] = result[i][j] + ( Array1[i][k] * Array2[k][j] ) ;
            }//end for calculate
        }//end for
    }//end for
    
    printf("\n-----------------------------------------------\nArray1\n") ;
    for ( int i = 0 ; i < row1 ; i++ ) {
        for ( int j = 0 ; j < col1 ; j++ ) {
            printf( "%d ", Array1[i][j] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for

    printf("Array2\n") ;
    for ( int i = 0 ; i < row2 ; i++ ) {
        for ( int j = 0 ; j < col2 ; j++ ) {
            printf( "%d ", Array2[i][j] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for


    printf("Array1 x Array2:\n") ;
    for ( int i = 0; i < row1; i++ ) {
        for ( int j = 0; j < col2; j++ ) {
            printf( "%d ", result[i][j] ) ;
        }//end for
        printf("\n") ;
    }//end for

    return 0 ;
}
