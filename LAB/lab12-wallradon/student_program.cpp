#include <stdio.h>

int u[ 100 ][ 10000 ] ; 
int y[ 100 ][ 1000 ] ; 

int *KnapsackKP( int *w, int *v, int n, int wx ) ;

int main() {
    int wx = 11, ans = 0, n, i ;
    n = 5 ;
    
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
    
    int *x = KnapsackKP( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    for( int i = 0 ; i < n ; i++ ) if( x[ i ] == 1 ) ans += v[ i ] ;
    printf( "\nValue = %d", ans ) ;
    return 0 ;
}

int *KnapsackKP( int *w, int *v, int n, int wx ) {
    int *x = new int[n]() ;
    // คำนวณ DP
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j <= wx; j++ ) {
            int a, b ;
            if ( i - 1 < 0 ) {
                a = 0 ;
            } else {
                a = u[i - 1][j] ;
            }
            if ( j - w[i] < 0 ) {
                b = -9999 ; 
            } else if ( j - w[i] == 0 || i - 1 < 0 ) {
                b = v[i] ;
            } else {
                b = u[i - 1][j - w[i]] + v[i] ;
            }
            if ( a > b ) {
                u[i][j] = a ;
            } else {
                u[i][j] = b ;
                y[i][j] = 1 ; 
            }//end if
        }//end for
    }//end For

    int j = wx ;
    for ( int i = n - 1 ; i >= 0 ; i-- ) {
        if (i == 0 && u[i][j] > 0) {
            x[i] = 1 ;
        } else if (y[i][j] == 1) {
            x[i] = 1 ;
            j -= w[i] ;
        } else {
            x[i] = 0 ;
        }//end if
    }//end for

    return x;
}