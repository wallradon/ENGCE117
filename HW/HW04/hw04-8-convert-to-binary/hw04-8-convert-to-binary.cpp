/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>
#include <string.h>

int main() {
    char  hex[50] ; 
    int zerodel = 0 ;
    printf( "User input hex : " ) ;
    scanf( "%s", hex ) ;
    int len = strlen( hex ) ;

    for (int i = 0; i < len ; i++)
    {
        switch (hex[i])
        {
        case '0':
            printf( "0000" ) ; 
            break ;
        case '1':
            if ( zerodel == 0 ) {
                printf( "1" ) ; 
                zerodel = 1 ;
            }else{
                printf( "0001" ) ; 
               
            }//end if
             break ;
        case '2':
            if ( zerodel == 0 ) {
                    printf( "10" ) ; 
                    zerodel = 1 ;
                }else{
                    printf( "0010" ) ; 
                }//end if
                break ;
        case '3':
            if ( zerodel == 0 ) {
                    printf( "11" ) ; 
                    zerodel = 1 ;
                }else{
                    printf( "0011" ) ;
                }//end if
                break ;
        case '4':
            if ( zerodel == 0 ) {
                    printf( "100" ) ; 
                    zerodel = 1 ;
                }else{
                    printf( "0100" ) ;
                }//end if
            break ;
        case '5':
        if ( zerodel == 0 ) {
                    printf( "101" ) ; 
                    zerodel = 1 ;
                }else{
                    printf( "0101" ) ;
                }//end if
            break ;
        case '6':
            if ( zerodel == 0 ) {
                    printf( "110" ) ; 
                    zerodel = 1 ;
                }else{
                    printf( "0110" ) ;
                }//end if
            break ;
        case '7':
            if ( zerodel == 0 ) {
                    printf( "111" ) ; 
                    zerodel = 1 ;
                } else {
                    printf( "0111" ) ;
                }//end if
            break ;
        case '8':
            printf( "1000" ) ; 
            break ;
        case '9':
            printf( "1001" ) ; 
            break ;
        case 'A':
            printf( "1010" ) ; 
            break ;
        case 'B':
            printf( "1011" ) ; 
            break ;
        case 'C':
            printf( "1100" ) ; 
            break ;
        case 'D':
            printf( "1101" ) ; 
            break ;
        case 'E':
            printf( "1110" ) ; 
            break ;
        default:
            printf( "1111" ) ; 
            break ;
        }
    }//end for

}//end function
