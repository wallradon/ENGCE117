#include <stdio.h>

void SetArray( int **, int *n ) ;
void PrintArray( int [], int n, const char comment[ 20 ] ) ;
int BinarySearch( int [], int n, int find ) ;
void MergeSort( int t[], int k ) ;
void Merge( int *u, int m, int *v, int n, int *t ) ;

int main() {
    int n = 0, pos = -1, find = -1, *data ;
    // int n = 5, pos = -1, find = -1, data[5] = {47, 13, 28, 32, 66 } ; //test
    SetArray( &data, &n ) ;    
    PrintArray( data, n, "Origin" ) ;

    MergeSort( data, n ) ;      
    PrintArray( data, n, "Sort" ) ;
    printf( "Search (value) : " ) ;
    scanf( "%d", &find ) ;
    pos = BinarySearch( data, n, find ) ;
    printf( "FOUND %d in POSITION = Arr[%d]\n", data[pos], pos ) ;
    delete[] data ;
    return 0 ;
}

void PrintArray( int *Arr, int n, const char comment[ 20 ] ) { //TODO: comment คือข้อความที่อยากแสดงตรงส่วนหัวของชุดข้อความ
    printf( "\n%s: ", comment ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", Arr[i] ) ;
    }
    printf("\n");
}

void SetArray( int **Arr, int *n ) {
    printf("enter index : " ) ;
    scanf("%d", n ) ;
    *Arr = new int[*n] ;
    printf("Enter %d elements: ", *n);
    for(int i = 0; i < *n; i++) {
        scanf("%d", &(*Arr)[i]);
    }
}

int BinarySearch( int arr[], int n, int find ) {
    int i = 0, j = n - 1 , m = 0, pos = 0 ;
    while( i < j ) {
        m = (i + j) / 2 ;
        if (arr[m] < find )
            i = m + 1 ;
        else
            j = m ;
    }
    pos = ( arr[i] == find ? i : -1 ) ;
    return pos ;
}

void MergeSort( int t[], int k ) {
    int n = k ;
    int M = n / 2 ;
    if (n <= 1) return ;

    int *u = new int[ M ] ;
    int *v = new int[ n - ( M ) ] ;

    for (int i = 0; i < (M); i++) {
        u[i] = t[i] ;
    } //endfor
    for (int i = (M); i < n; i++) {
        v[i - (M)] = t[i] ;
    }//endfor
    MergeSort(u, ( M )) ;
    MergeSort(v, n - ( M )) ;

    Merge( u, M, v, n - M, t ) ;

    delete[] u;
    delete[] v;
}

void Merge( int *u, int m, int *v, int n, int *t ) {
    int i = 0, j = 0 ;
    for (int k = 0 ; k <= ( m + n ) - 1 ; k++ ) {
        if ( i >= m ) {
            t[k] = v[j] ;
            j++ ;
        }else if ( j >= n ) {
            t[k] = u[i] ;
            i++ ;
        }else if ( u[i] < v[j] )
        {
            t[k] = u[i] ;
            i++ ;
        }else{
            t[k] = v[j] ;
            j++ ;
        }
    }
    
}