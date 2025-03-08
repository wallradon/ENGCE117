
#include <stdio.h>

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) ;

int main() {
    int n = 5, wx = 11, vx, i ;
    
    printf( "Enter n : " ) ;
    scanf( "%d", &n ) ;
    printf( "Enter wx : " ) ;
    scanf( "%d", &wx ) ;
    
    int *w = new int[ n ] ;
    int *v = new int[ n ] ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "weight for item %d : ", i ) ;
        scanf( "%d", &w[ i ] ) ;
    }
    for( i = 0 ; i < n ; i++ ) {
        printf( "value for item %d : ", i ) ;
        scanf( "%d", &v[ i ] ) ;
    }
    
    int *x = new int[n] ;
    vx = KnapsackBT( w, v, n, wx, 0, x ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    printf( "\nValue = %d", vx ) ;
    return 0 ;
}

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) {
    int b = 0 ;
    int *y = new int[n]() ;
    for ( int k = i ; k < n ; k++ ) {
        if ( w[ k ] <= wx ) {
            int a = v[k] + KnapsackBT( w, v, n, wx-w[k], i + 1, y ) ;
            if ( a > b ) {
                b = a ;
                for ( int j = 0 ; j < n ; j++ ) {
                    x[j] = y[j] ; 
                }
                x[k] = 1 ; 
            }//end if
        }//end if
    }//end for
    delete[] y ;
    return b ; 
}
