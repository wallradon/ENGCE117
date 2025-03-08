## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเขียนโปรแกรมในการแก้ปัญหา Knapsack โดยใช้กระบวนวิธี Dynamic algorithm programming ตามที่ได้เรียนมาจากในห้องเรียน

## FIX CODE
```c++
#include <stdio.h>

int *KnapsackKP( int *w, int *v, int n, int wx ) ;

int main() {
    int wx = 11, ans = 0, n, i ;
    n = 5 ;
    
    printf( "Enter n : " ) ;
    scanf( "%d", &n ) ;
    printf( "Enter wx : " ) ;
    scanf( "%d", &wx ) ;
    
    int *w = new int[ n ] ;
    int *v = new int[ n ] ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "weight for item %d : ", i ) ;
        scanf( "%d", &w[ i ] ) ;
    }
    for( i = 0 ; i < n ; i++ ) {
        printf( "value for item %d : ", i ) ;
        scanf( "%d", &v[ i ] ) ;
    }
    
    int *x = KnapsackKP( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    for( int i = 0 ; i < n ; i++ ) if( x[ i ] == 1 ) ans += v[ i ] ;
    printf( "\nValue = %d", ans ) ;
    return 0 ;
}

int *KnapsackKP( int *w, int *v, int n, int wx ) {
    //YOUR CODE HERE
}
```

## TEST CASE
### Input
```bash
Enter n : 5
Enter wx : 11
weight for item 0 : 1
weight for item 1 : 2
weight for item 2 : 5
weight for item 3 : 6
weight for item 4 : 7
value for item 0 : 1
value for item 1 : 6
value for item 2 : 18
value for item 3 : 22
value for item 4 : 28
```
### Output
```bash
0 0 1 1 0 
Value = 40
```
