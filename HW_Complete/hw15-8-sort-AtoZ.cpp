/*
    จงเขียนโปรแกรมอ่านค่าจากข้อมูลในไฟล์ แล้วนำมาแสดงบนหน้าจอ จากนั้นนำมาเรียงลำดับตามตัวอักษรจาก A-Z และเรียงข้อมูลจาก Z-A

    ข้อมูลภายในไฟล์ a15-8.txt :
        Thai
        Bird
        Ant
        Zero
        Wolf
        Cobra
        Orange
        Mango
        Yoyo
    Output:
        Normal (9 Item): Thai, Bird, Ant, Zero, Wolf, Cobra, Orange, Mango, Yoyo .
        Sort (A to Z)  : Ant, Bird, Cobra, Mango, Orange, Thai, Wolf, Yoyo, Zero .
        Sort (Z to A)  : Zero, Yoyo, Wolf, Thai, Orange, Mango, Cobra, Bird, Ant .

        Normal (9 Item): Thai, Bird, Ant, Zero, Wolf, Cobra, Orange, Mango, Yoyo .
        Sort (A to Z)  : Ant, Bird, Cobra, Mango, Orange, Thai, Wolf, Yoyo, Zero .
        Sort (Z to A)  : Zero, Yoyo, Wolf, Thai, Orange, Mango, Cobra, Bird, Ant 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct names {
    char name[20] ;
} typedef N ;


void readtext() ;
void SortText(N name[20], int config, int count ) ;
void show( N name[], int count ) ;
int main() {
    readtext() ;
    return 0 ;
}//end function

void readtext(){
    FILE *fp ;
    fp = fopen("E:/ENGCP_1/T2/ENGCE117/HW/HW15/text.dat", "r" ) ;
    if( fp == NULL ){
        printf( "NO HAVE TEXT\n" ) ;
    }//end if

    N name[20] ;
    int count = 0 ;

    for ( int i = 0 ; i < 30 ; i++ ) {
        if ( fscanf( fp, "%s", name[i].name ) == EOF ) break ;
        count++ ;
    }//end for

    printf( "Normal (%d Item): ", count ) ;
    show( name, count ) ;
    printf( "\n" ) ;
    fclose( fp ) ;

    SortText( name, 1, count ) ;
    printf( "Sort (A to Z)  : " ) ;
    show( name, count ) ;
    printf( "\n" ) ;

    SortText( name, 2, count ) ;
    printf( "Sort (Z to A)  : " ) ;
    show( name, count ) ;
    printf( "\n" ) ;
}//end function

void SortText(N name[20], int config, int count ){


    if ( config == 1) {
        for (int i = 0 ; i < count - 1 ; i++) {
            for (int j = i + 1; j < count ; j++) {
                if (strcmp( name[i].name, name[j].name) > 0) {
                    N temp = name[i] ; 
                    name[i] = name[j] ;
                    name[j] = temp ;
                }//end if
            }//end for
        }//end for      
    }//end if

    if ( config == 2) {
        for (int i = 0 ; i < count - 1 ; i++) {
            for (int j = i + 1; j < count ; j++) {
                if (strcmp( name[i].name, name[j].name) < 0) {
                    N temp = name[i] ; // ใช้ struct ช่วยสลับค่าระหว่างตัวแปร
                    name[i] = name[j] ;
                    name[j] = temp ;
                }//end if
            }//end for
        }//end for      
    }//end if
    
}

void show( N name[], int count ){
    for ( int i = 0 ; i < count ; i++ ) {
        if( i == count - 1 )
            printf( "%s .", name[i].name ) ;
        else
            printf( "%s, ", name[i].name ) ;
    }//end if
}