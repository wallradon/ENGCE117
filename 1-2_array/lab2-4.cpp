/*
เขียนฟังก์ชัน explode() ที่สามารถแยกข้อความใน str1 เป็นหลายๆ ส่วนโดยใช้ตัวอักขระหรือหลายตัวอักขระใน splitters[] เป็นตัวแบ่งแยก 
ซึ่งจะต้องจัดการกรณีที่มีช่องว่าง หรือ ค่าที่ไม่ใช่ตัวอักขระในข้อความ 
โดยเก็บผลลัพธ์ใน str2[] และจำนวนข้อความที่แยกได้ใน count 
ซึ่งผลลัพธ์จะต้องไม่มีช่องว่างหรือค่าที่ไม่ได้ใช้ในแต่ละคำที่แยกออกมา

ข้อกำหนด

str1: ข้อความที่ต้องการแยก
splitters: ตัวอักขระที่ใช้เป็นตัวแบ่ง (สามารถมีหลายตัวได้)
str2: อาร์เรย์ที่ใช้เก็บผลลัพธ์ที่ได้จากการแยก
count: ตัวแปรที่ใช้เก็บจำนวนข้อความที่แยกได้

Fix code

void explode(char str1[], char splitters[], char str2[][10], int *count);

*/

#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitters[], char str2[][20], int *count ) ;

int main() {
    char out[20][20] ;  // อาร์เรย์เก็บคำที่แยกได้
    int num ;           // เก็บจำนวนคำที่แยกได้
    
    char text[50] = "fruit_apple fruit_orange fruit_banana" ;  
    char splitters[10] = " ,!:-*/ " ;
    explode( text, splitters, out, &num ) ;

    for ( int i = 0 ; i < num ; i++ ) {
        printf( "out[%d] = \"%s\"\n", i, out[i] ) ;
    }//end for
    printf( "count = %d\n", num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitters[], char str2[][20], int *count ) {

    int index = 0, pos = 0, splitter_check = 0 ;
    *count = 0 ;   
    int splitter_count = strlen(splitters) ;

    for ( int i = 0 ; str1[i] != '\0' ; i++ ) {//ค่าใน str1
        splitter_check = 0 ;
        for ( int s = 0 ; s < splitter_count ; s++ ) {
            if ( str1[i] == splitters[s] ) {// splitter
                splitter_check = 1 ;
                break ;
            }//end splitter_check
        }//end for splitter_count

        if ( splitter_check == 1 ) {
            if ( pos > 0 ) {    
                str2[index][pos] = '\0' ; 
                index++ ; //ย้ายแถว 
                pos = 0 ; 
            }//end if add word
        } else {
            str2[index][pos] = str1[i] ; // เก็บตัวอักษร
            pos++ ;
            // printf("index = %d, pos = %d \n", index, pos ) ;
        }//end if 

    }//end for All

    if (pos > 0) { //จบยัง
        str2[index][pos] = '\0' ;
        index++ ;
    }//end if
    *count = index ;
}//end function explode