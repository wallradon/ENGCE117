/*เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() 
ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"*/

#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    // char text[ 50 ] = "I Love You" ;
    // char text[ 50 ] = "Hello World" ;
    // char text[ 50 ] = "Program" ;
    // char text[ 50 ] = "This is a test" ;
    // char text[ 50 ] = "Hello@World!" ;
    // char text[ 50 ] = "12345" ;
    char text[ 50 ] = "This is a long sentence to test the function." ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {

    int counts = strlen( str1 ) ;
    printf( "strlen = %d\n ", counts ) ;
    // printf("test");
    for ( int i = 0 ; i < counts ; i++ )
    {
        str2[i] = str1[counts - i - 1]  ;    
    }//end for
    counts = strlen( str2 ) ;
    for (int p = 0 ; p < counts ; p++ )
    {
        printf( "%c" , str2[p] );
    }//end for
    printf( "\n" ) ;
}//end function
