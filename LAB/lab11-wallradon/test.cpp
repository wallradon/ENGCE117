#include <stdio.h>

//----| Greedy Algorithm : Shortest Path
void SetWeight( int *Town, int n, int i, int j, int Weight ) {
    Town[i * n + j] = Weight;
}

int *Dijkstra( int *L, int n ) {
    static int D[100];
    int C[100];
    int v = -1;
    int sizeC = n - 1;

    for (int i = 0; i < sizeC; i++) {
        C[i] = i + 1; 
    }

    for (int i = 1; i < n; i++) {
        D[i] = L[0 * n + i]; 
    }
    
    for (int count = 0; count < n - 1; count++) {
        int min = 9999;
        for (int i = 0; i < sizeC; i++) {
            if (D[C[i]] < min) {
                min = D[C[i]];
                v = C[i];
            }
        }

        for (int i = 0; i < sizeC; i++) {
            if (C[i] == v) {
                for (int j = i; j < sizeC - 1; j++) {
                    C[j] = C[j + 1];
                }
                sizeC--; 
                break; 
            }
        }

        for (int i = 0; i < sizeC; i++) {
            int w = C[i];
            if (D[w] > D[v] + L[v * n + w]) {
                D[w] = D[v] + L[v * n + w];
            }
        }
    }
    
    return D; // ส่งคืนอาร์เรย์ D
}

void InitializeGraph(int *g, int n, int value) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i * n + j] = value;  // ตั้งค่าทุกจุดในกราฟเป็นค่าเริ่มต้น
        }
    }
}

void PrintGraph( int *g, int n ) {
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%4d ", g[i * n + j] );  
        }
        printf("\n"); 
    }
}
void PrintArrayAndMax(int *arr, int size) {
    int Max = -9999 ; 
    for (int i = 1; i <= size; i++) {
        printf("%d ", arr[i]); 
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    printf("\nTotal Range = %d\n", Max);
 
}


//----| Greedy Algorithm : Knapsack Problem
int *KnapsackGreedy(int *w, int *v, int n, int wx) {
    static int x[100];
    int weight = 0;

    for (int i = 0; i < n; i++) {
        x[i] = 0; 
    }

    while (weight < wx) {
        int bestIndex = -1;
        float bestValuePerWeight = 0; 

        for (int i = 0; i < n; i++) {
            if (x[i] == 0) {
                float valuePerWeight = (float)v[i] / w[i]; 
                if (valuePerWeight > bestValuePerWeight) {
                    bestValuePerWeight = valuePerWeight;
                    bestIndex = i;
                }
            }
        }
        if (bestIndex != -1) {
            if (weight + w[bestIndex] <= wx) {  
                x[bestIndex] = 1;
                weight += w[bestIndex]; 
            } else {
                break;
            }
        } else {
            break; 
        }
    }
    return x;
}
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