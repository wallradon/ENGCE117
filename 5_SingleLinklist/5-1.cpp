#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    int data ;
    struct studentNode *next ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, const char name[20], int age, char sex, float gpa ) ;
struct studentNode *InsNode( struct studentNode **walk, const char name[20], int age, char sex, float gpa ) ;
struct studentNode *DelNode( struct studentNode **walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; 
    ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; 
    ShowAll( start ) ;
    now = InsNode( &now, "three", 10, 'M', 3.33 ) ; 
    ShowAll( start ) ;
    now = InsNode( &now, "four", 12, 'F', 3.44 ) ; 
    ShowAll( start ) ;
    DelNode( &now ) ; 
    ShowAll( start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    printf( " " ) ;
    printf( "\n" ) ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, const char name[20], int age, char sex, float gpa ) {
    
    while ( *walk != NULL ) {
        walk = &(*walk)->next ;
    }//end walk

    *walk = new struct studentNode ;
    strcpy( ( *walk )->name, name ) ;
    ( *walk )->age = age ;
    ( *walk )->sex = sex ;
    ( *walk )->gpa = gpa ;
    ( *walk )->next = NULL ;
    return *walk ;
}


struct studentNode *InsNode( struct studentNode **walk, const char name[20], int age, char sex, float gpa ) {
    struct studentNode *temp ;
    temp = (*walk)->next ;
    
    (*walk)->next = new struct studentNode ;
    strcpy( ( *walk )->next->name, name ) ; 
    ( *walk )->next->age = age ;
    ( *walk )->next->sex = sex ;
    ( *walk )->next->gpa = gpa ;
    (*walk)->next->next = temp ;  

    return (*walk)->next ;

}//end function

struct studentNode *DelNode( struct studentNode **walk ) {
    ( *walk ) = NULL ;
    return (*walk) ;
}//end function
