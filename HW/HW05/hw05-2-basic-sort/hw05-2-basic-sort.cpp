/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/

#include<stdio.h>

int main() {
    int inp1, inp2, inp3;

    printf( "Enter number 1: " ) ;
    scanf( "%d", &inp1 ) ;
    printf( "Enter number 2: " ) ;
    scanf( "%d", &inp2 ) ;
    printf( "Enter number 3: " ) ;
    scanf( "%d", &inp3 ) ;

    if ( inp1 >= inp2 && inp1 >= inp3 ) { 
        printf("%d ", inp1) ;
        if ( inp2 >= inp3 ) {
            printf( "%d %d\n", inp2, inp3 ) ;
        } else {
            printf( "%d %d\n", inp3, inp2 ) ;
        }
    } else if ( inp2 >= inp1 && inp2 >= inp3 ) { 
        printf( "%d ", inp2 ) ;
        if ( inp1 >= inp3 ) {
            printf( "%d %d\n", inp1, inp3 ) ;
        } else {
            printf( "%d %d\n", inp3, inp1 ) ;
        }
    } else if ( inp3 >= inp1 && inp3 >= inp2 ) { 
        printf( "%d ", inp3 ) ;
        if ( inp1 >= inp2 ) {
            printf( "%d %d\n", inp1, inp2 ) ;
        } else {
            printf( "%d %d\n", inp2, inp1 ) ;
        }
    }// end if

    return 0 ;
}//end function
