/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/

#include <stdio.h>

void sortArray( int arr[], int n ) ;

int main() {
    int n ;
    
    printf( "Input N: " ) ;
    scanf( "%d", &n ) ;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ ) {
        printf("Element[%d]: ", i) ;
        scanf("%d", &arr[i] ) ;
    }
    sortArray( arr, n ) ;
    for ( int i = 0; i < n; i++ ) {
        int count = 1;
        if (arr[i] == 999) continue ; // ข้ามค่า

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = 999 ; 
            }
        }

        
        printf( "%d -> %d value%s.\n", arr[i], count, count > 1 ? "s" : "" ) ;
    }

    return 0 ;
}

void sortArray( int arr[], int n ) {
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = 0 ; j < n - i - 1 ; j++ ) {
            if ( arr[j] > arr[j + 1] ) {
                int temp = arr[j] ;
                arr[j] = arr[j + 1] ;
                arr[j + 1] = temp ;
            }//end if
        }//end for j
    }//end for i
}//end function