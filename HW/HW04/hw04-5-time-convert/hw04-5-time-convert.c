/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"

    1 d = 24 h
    1 h = 60 m
    1 m = 60 s

    60 m / 1h = 3600 s  สูตร 60 m = 60 m * 60 s

    24 h = 86400 s    สูตร 24 h * 3600 s 

    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/

#include <stdio.h>

int main() {
    long seconds , day ;

    printf( "Enter the number of day : " ) ;
    scanf( "%ld", &day ) ;

    seconds = day * 86400 ;

    printf( "%ld days = %ld seconds", day, seconds ) ;


}//end function