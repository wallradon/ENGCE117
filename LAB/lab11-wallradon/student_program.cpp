#include <stdio.h>

//----| Greedy Algorithm : Shortest Path
void SetWeight( int *Town, int n, int i, int j, int Weight ) ;
int *Dijkstra( int *L, int n ) ;
void InitializeGraph( int *g, int n, int value ) ;
void PrintGraph( int *g, int n ) ;
void PrintArrayAndMax(int *arr, int size) ;

//----| Greedy Algorithm : Knapsack Problem
int *KnapsackGreedy( int *w, int *v, int n, int wx ) ;

int main() {
    printf( "Greedy Algorithm : Shortest Path\n" ) ;
    int n = 5, i, j, *d, *g, km ;
    g = new int[ n * n ] ;
    
    printf( "Enter town : " ) ;
    scanf( "%d", &n ) ;
    
    InitializeGraph( g, n, -1) ;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n ; j++ ) {
            printf( "Enter km [%d, %d] : ", i, j ) ;
            scanf( "%d", &km ) ;
            SetWeight( g, n, i, j, km ) ;    
        }
    }
    
    PrintGraph(g, n);
    
    d = Dijkstra( g, n ) ;
    PrintArrayAndMax(d, n - 1);
    
    printf( "\nGreedy Algorithm : Knapsack Problem\n" ) ;
    int wx = 11, ans = 0 ;
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
    
    int *x = KnapsackGreedy( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    for( int i = 0 ; i < n ; i++ ) if( x[ i ] == 1 ) ans += v[ i ] ;
    printf( "\nValue = %d", ans ) ;
    return 0 ;
}

void SetWeight( int *Town, int n, int i, int j, int Weight ) {
    *( Town + i * n + j ) = Weight ;
}//end function SetWeight
int *Dijkstra( int *L, int n ) {
     int *D = new int[n] ;
    int visited[n] ;

    for( int i = 0; i < n; i++ ) {
        D[i] = *( L + 0 * n + i ) ; 
        visited[i] = 0 ;
    }//end for

    D[0] = 0 ; 
    visited[0] = 1 ; 

    for( int count = 0; count < n - 1; count++ ) {
        int min = 999999, minIndex ;
        for( int v = 0; v < n; v++ ) {
            if ( !visited[v] && D[v] < min && D[v] != -1 ) {
                min = D[v] ;
                minIndex = v ;
            }//end if
        }//end for

        visited[minIndex] = 1;

        for( int w = 0; w < n; w++ ) {
            int weight = *(L + minIndex * n + w);
            if ( !visited[w] && weight != -1 && D[minIndex] + weight < D[w] ) {
                D[w] = D[minIndex] + weight ;
            }//end if
        }//end for
    }//end for
    return D ;
}//end function Dijkstra
void InitializeGraph( int *g, int n, int value ) {
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            *( g + i * n + j ) = ( i == j ) ? 0 : value ; //end for
}//end InitializeGraph
void PrintGraph( int *g, int n ) {
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%4d ", g[i * n + j] );  
        }//end for
        printf("\n"); 
    }//end for
}//end PrintGraph
void PrintArrayAndMax( int *arr, int size )  {
    int max = -1 ;  

    
    for (   int i = 1 ; i <= size ; i++ ) {  
        if (arr[i] != -1 && arr[i] != 0) {  
            printf( "%d ", arr[i] ) ;
            if ( arr[i] > max ) {
                max = arr[i] ;
            }//end if
        }//end if
    }//end for

    printf( "\nTotal Range = %d\n", max ) ;  
}//end functionPrintArrayAndMax

int *KnapsackGreedy( int *w, int *v, int n, int wx ) {
   int *x = new int[n]{} ;
    double ratio[n] ;
    int index[n] ;
    
    for ( int i = 0; i < n; i++ ) {
        ratio[i] = (double)v[i] / w[i] ;
        index[i] = i ;
    }//end for
    
    for (int i = 0; i < n - 1; i++) {
        for ( int j = 0; j < n - i - 1; j++ ) {
            if ( ratio[j] < ratio[j + 1] ) {
                double temp = ratio[j] ;
                ratio[j] = ratio[j + 1] ;
                ratio[j + 1] = temp ;
                
                int tempIdx = index[j] ;
                index[j] = index[j + 1] ;
                index[j + 1] = tempIdx ;
            }//end if
        }//end for
    }//end for
    
    int currentWeight = 0 ;
    for ( int i = 0; i < n; i++ ) {
        int idx = index[i] ;
        if ( currentWeight + w[idx] <= wx ) {
            x[idx] = 1 ;
            currentWeight += w[idx] ;
        }//end if
    }//end for
    
    return x ;
}//end KnapsackGreedy
