#include <stdio.h>
int main(){
	int num ;
	printf( "input : " ) ;
	scanf( "%d", &num ) ;
	if( num > 0 ){
		printf( "\n Positive \n" ) ;
	}else {
		printf( "\n Negative \n" ) ;
	}//end if
    return 0 ;
}//end function
