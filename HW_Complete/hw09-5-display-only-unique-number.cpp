/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก 
    จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

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

    printf("Unique value : " ) ;
    
    for ( int i = 0 ; i < n ; i++ ) {
        int count = 1 ;
        if ( arr[i] == 999 ) continue ; 

        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( arr[i] == arr[j] )  {
                count++ ;
                arr[j] = 999 ; 
            }
        }
        if (count == 1){
            printf( "%d ", arr[i] ) ;
        }
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