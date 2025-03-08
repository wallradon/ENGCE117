/*
จงเขียนโปรแกรมในการหาอัลกอริทึม Root of function ตามที่เรียนในห้องเรียน โดยมีตัวแปร mode มีเงื่อนไขดังนี้

- mode = 0 จะได้สมการ f(x) = 2x - 5
- mode = 1 จะได้สมการ f(x) = 8x + 16

## FIX CODE
```c++
*/

#include <stdio.h>

double f( double x, int mode ) ;
double RootOfFunction( double xl, double xr, double epsilon, int mode ) ;

int main() {
    double root, first_value ;
    int mode = 0 ;
    scanf( "%d %lf", &mode, &first_value ) ;
    printf( "Ans =\n" ) ;
    root = RootOfFunction( -1, first_value, 0.1, mode ) ;
    printf( "root = %0.1f", root ) ;
    return 0 ;
}

double f( double x, int mode ) {
    if ( mode == 0) {
        return 2 * x - 5 ;
    }else if ( mode == 1) {
        return 8 * x + 16 ;
    }//end if
}

double RootOfFunction( double xl, double xr, double epsilon, int mode ) {
    double xm = ( xl + xr ) / 2, root = 0 ;
    printf( "%0.1f %0.1f %0.1f\n", xl, xm, xr ) ;
    if ( (xr - xl) < epsilon ) {
        root = xm ;
    }else if (f( xm, mode ) == 0 ) {
        root = xm ;
    }else if ( f( xl, mode ) * f( xm, mode ) < 0 ) {
        root = RootOfFunction(  xl,  xm,  epsilon,  mode ) ;
    }else{
        root = RootOfFunction(  xm,  xr,  epsilon,  mode ) ;
    } 
    return root ;
}