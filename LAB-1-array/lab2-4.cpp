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

void explode( char str1[], char splitters[], char str2[][15], int *count ) ;

int main() {
    char out[20][15] ;  // อาร์เรย์เก็บคำที่แยกได้
    int num ;           // เก็บจำนวนคำที่แยกได้
    // ทดสอบกรณีต่างๆ
    // char text[50] = "I,Love World/You";  
    // char text[50] = "   Hello  World  From Me";  
    // char text[50] = "Apple,,Orange,Banana,,Grapes";  
    // char text[50] = "key:value:key2:value2";  
    // char text[50] = "apple-orange!banana*grapes";  
    char text[50] = "fruit_apple fruit_orange fruit_banana";  
    // char text[50] = ",,   ,Hello, World!   , ,";  

    char splitters[10] = " ,!:-* " ;
    explode( text, splitters, out, &num ) ;
    for ( int i = 0; i < num; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[i] ) ;
    }//end for
    printf( "count = %d\n", num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitters[], char str2[][15], int *count ) {
    int index = 0, pos = 0, is_splitter = 0 ;
    *count = 0 ;   
    int splitter_count = strlen(splitters) ;
    for ( int i = 0 ; str1[i] != '\0' ; i++ ) {//runค่าใน str1
        is_splitter = 0 ;
        for (int j = 0; j < splitter_count ; j++ )
        {
            if ( str1[i] == splitters[j] ) { 
                is_splitter = 1 ; // พบตัวแบ่ง
                break ; // ออกจากลูป
            }//end if
        }//end for

        if (is_splitter) {
            if ( pos > 0 ) {    
                str2[index][pos] = '\0' ; // สิ้นสุดคำ
                index++ ; // ย้ายช่อง
                pos = 0 ; // รีเซ็ตตำแหน่ง
            }
        } else {
            str2[index][pos++] = str1[i] ; // เอาค่าไปใส่ในช่อง
        }//end if

    }//end for

    if (pos > 0) { //จบหรือยัง
        str2[index][pos] = '\0' ;
        index++ ;
    }//end if
    *count = index ;
}//end function