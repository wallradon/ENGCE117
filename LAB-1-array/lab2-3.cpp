/*
    #include <stdio.h>

    void explode( char str1[], char splitter, char str2[][10], int *count ) ;

    int main() {
        char out[ 20 ][ 10 ] ;
        int num ;
        explode( "I/Love/You", "/" ) ;
        return 0 ;
    }//end function
*/
#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[20][10] ;  // อาร์เรย์เก็บคำที่แยกได้
    int num ;           // เก็บจำนวนคำที่แยกได้
    
    char text[] = "   Hello   World  " ;  
    explode( text, '   ', out, &num ) ;

    for ( int i = 0; i < num; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[i] ) ;
    }//end for
    printf( "count = %d\n", num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][10], int *count ) {
    int index = 0, pos = 0 ;
    *count = 0 ;   
    for ( int i = 0 ; str1[i] != '\0' ; i++ ) {//runค่าใน str1
        if ( str1[i] == splitter ) {// ถ้าเจอ splitter
            if ( pos > 0 ) {    
                str2[index][pos] = '\0' ; 
                index++ ; //ย้าย ช่อง 
                pos = 0 ; 
            }//end if
        } else {
            str2[index][pos++] = str1[i] ; //เอาค่าไปใส่ในช่อง
        }//end if
    }//end for

    if (pos > 0) { //จบหรือยัง
        str2[index][pos] = '\0' ;
        index++ ;
    }//end if
    *count = index ;
}//end function