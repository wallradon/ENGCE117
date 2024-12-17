/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/  

#include<stdio.h>

int main() {
    int num[9] ;

    for (int i = 0 ; i < 9 ; i++ ) {
        printf( "Input [%d] : ", i) ;
        scanf( "%d", &num[i] ) ;
    }//end for

    printf( "Index = " ) ;
    for (int j = 0 ; j < 8 ; j++ ) {
        printf( "%d ", j ) ;
    }//end for

    printf( "\nArray = " ) ;
    for (int A = 0 ; A < 8 ; A++ ) {
        printf( "%d ", num[A] ) ;
    }//end for
    
    

}//end function