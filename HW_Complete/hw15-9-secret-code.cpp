/*
    จงเขียนโปรแกรมเพื่อถอดรหัสข้อมูลจากไฟล์ และแปลงเป็นภาษาอังกฤษให้ถูกต้อง โดยโค๊ดที่อ่านได้จากไฟล์คือภาษาอังกฤษที่ถูกเลื่อนไปทางขวา 6 ตัวอักษร 
    (เข้าไปที่เว็บไซท์นี้ https://studio.code.org/s/hoc-encryption/stage/1/puzzle/1 
    และทำการเลื่อนตัวอักษรไปทางขวา 6 ครั้ง จะได้รหัสลับนี้มา
    ดูวีดีโอประกอบได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=eN4coe9KKzE

    ข้อมูลภายในไฟล์ a15-9.txt :
        C UG ALIIN
    Output:
        Output: I AM GROOT
*/

#include <stdio.h>
void readtext() ;
void CodeToText(int code) ;

int main(){
    readtext() ;
}

void readtext(){
    FILE *fp ;
    fp = fopen("E:/ENGCP_1/T2/ENGCE117/HW/HW15/a15-9.txt", "r" ) ;
    if( fp == NULL ){
        printf( "NO HAVE TEXT\n" ) ;
    }else{
        printf( "Complete\n" ) ;
    }//end if

    char name ;
    int count = 0 ;

    printf( "Output: " ) ;
    while ((name = fgetc(fp)) != EOF) {
        // printf( "%c\n", name ) ;
        int codes = name ;
        // printf( "code = %d\n", codes ) ; 
        CodeToText(codes) ;
    }
    fclose( fp ) ;
}

void CodeToText(int code){
    int codes = code + 6 ;
    if ( codes >= 65 && codes <= 90) {
        printf("%c", codes) ;   
    }else if( codes > 90 ){
        codes = 65 ;
        printf("%c", codes) ;
    }else{
        printf(" ") ;
    }//end if
}//end function

