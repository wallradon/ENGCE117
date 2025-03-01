#include <stdio.h>
#include <stdlib.h>

void SetArray(int **Arr, int *n);
int BinarySearchRecursive(int arr[], int left, int right, int find) ;
int BSRecur( int data[], int n, int find, int i, int j ) ;

int main() {
    int n = 0, pos = -1, find = -1, *data;
    SetArray(&data, &n);
    scanf("%d", &find);//Search (value)
    pos = BinarySearchRecursive(data, 0, n - 1, find);
    if (pos != -1)
         printf("FOUND %d in POSITION = Arr[%d]\n", data[pos], pos) ;
    else
         printf("VALUE NOT FOUND\n") ;
    return 0 ;
}

void SetArray(int **Arr, int *n) {
    //printf("enter index : " ) ;
    scanf("%d", n ) ;
	if( *n == 0 ){
		printf( "Error\n" ) ;
		exit ( 0 ) ;
	}
    *Arr = new int[*n] ;
    printf( "Enter %d elements: ", *n ) ;
    for( int i = 0; i < *n; i++ ) {
        scanf("%d", &(*Arr)[i] ) ;
    }
	printf( "\n" ) ;
}

int BinarySearchRecursive( int arr[], int left, int right, int find ) {
	int i, pos, n = right + 1 ;
	i = BSRecur( arr, n, find, left, right ) ;
	if( arr[i] == find ) pos = i ;
	else pos = -1 ;
	return pos ;    
}

int BSRecur( int data[], int n, int find, int i, int j ){
	int m ;
	int k ;
	if( i < j ) {
		m = (i +j)/2 ;
		if( data[m] < find )
			k = BSRecur( data, n, find, m+1, j ) ;
		else
			k = BSRecur( data, n, find, i, m ) ;
	}else{
		k = i ;
	}
		return k ;
}
