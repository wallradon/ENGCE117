#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;
typedef struct student stds ;

struct student (*GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    printf( "\nGroup = %d\n", group ) ;
    return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ] {
    stds child[10] ;
    printf( "Enter number of room : " ) ;
    scanf( "%d", room ) ;
    for ( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d:\n", i + 1 ) ;
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d ", j + 1 ) ;
            scanf( "%s %d", child[j].name, &child[j].age ) ;
        }//end for
    }//end for

    printf( "Out put\n") ;
    for ( int r = 0 ; r < *room ; r++ ) {
        printf( "Room %d: 10 students entered.\n", r + 1 ) ;
    }//end for
    return 0 ;
}//end function struct student