#include <stdio.h>
#include <string.h>

int main() {
    int working_hrs = 0, salary_hrs = 0 ;
    float salary ;
    char employees_id[11], salarysum[100] ;
    

    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%10s", employees_id ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &working_hrs ) ;
    printf( "Enter salary amount/hr: " ) ;
    scanf( "%d", &salary_hrs ) ;

    salary = working_hrs * salary_hrs ;

    printf( "Expected Output:\n" ) ;
    printf( "Employees ID = %s\n", employees_id ) ;
    //print Salary
    sprintf(salarysum, "%.2f", salary);
    int len = strlen( salarysum ) - 3 ;
    int lens = strlen( salarysum ) ;    
    printf( "Salary = U$ " ) ;
    for ( int i = 0 ; i < len ; i++ ) {
        printf( "%c", salarysum[i] ) ; 

        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            printf(",");
        }

    }//end for

    for (int i = lens - 3 ; i < lens ; i++ ) {
        printf( "%c", salarysum[i] ) ;
    }//end for
    
    return 0 ;

} //end function