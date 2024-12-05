/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>

int main() {
    float celsius = 0, fahrenheit = 0 ;
    printf("User input : ") ;
    scanf( "%f", &celsius ) ;

    fahrenheit = (celsius * 1.8) + 32 ;

    printf( "%0.0f degree Celsius = %.1f degree Fahrenheit", celsius, fahrenheit ) ; 

}//end function
