## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเขียนโปรแกรมในการหาอัลกอริทึม Root of function ตามที่เรียนในห้องเรียน โดยมีตัวแปร mode มีเงื่อนไขดังนี้
- mode = 0 จะได้สมการ f(x) = 2x - 5
- mode = 1 จะได้สมการ f(x) = 8x + 16

## FIX CODE
```c++
#include <stdio.h>

double f( double x, int mode ) ;
double RootOfFunction( double xl, double xr, double epsilon, int mode ) ;

int main() {
    double root, first_value ;
    int mode = 0 ;
    scanf( "%d %lf", &mode, &first_value ) ;
    printf( "Ans =\n" ) ;
    root = RootOfFunction( -1, first_value, 0.1, mode ) ;
    printf( "root = %0.1f", root ) ;
    return 0 ;
}

double f( double x, int mode ) {
    //YOUR CODE HERE
}

double RootOfFunction( double xl, double xr, double epsilon, int mode ) {
    //YOUR CODE HERE
}
```

## TEST CASE
### Input
```bash
0 10
```
### Output
```bash
Ans =
-1.0 4.5 10.0
-1.0 1.8 4.5
1.8 3.1 4.5
1.8 2.4 3.1
2.4 2.8 3.1
2.4 2.6 2.8
2.4 2.5 2.6
2.4 2.5 2.5
root = 2.5
```
