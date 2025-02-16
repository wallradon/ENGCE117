## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชันต่อไปนี้
- SumLoop เพื่อรับค่าจากผู้ใช้ แล้วหาผลรวมตั้งแต่ 1 ถึง n โดยใช้วิธีการวนลูป For
- SumRecur เพื่อรับค่าจากผู้ใช้ แล้วหาผลรวมตั้งแต่ 1 ถึง n โดยใช้วิธีการวนแบบ Recurrsive
- TowerHanoi เพื่อแสดงวิธีการย้ายจานตามการแก้ปัญหา Tower Of Hanoi โดยใช้วิธีการแก้ปัญหาแบบ Recurrsive

## FIX CODE
```c++
#include <stdio.h>

int SumLoop( int ) ;
int SumRecur( int ) ;
void TowerHanoi( int m, int i, int j ) ;

int main() {
    int n = 0, m = 0, i = 0, j = 0 ;
    scanf( "%d %d %d %d", &n, &m, &i, &j ) ;
    printf( "%d\n", SumLoop( n ) ) ;
    printf( "%d\n", SumRecur( n ) ) ;
    TowerHanoi( m, i, j ) ;
    return 0 ;
}//end function

int SumLoop( int n ) {
  //YOUR CODE HERE
}

int SumRecur( int n ) {
  //YOUR CODE HERE
}

void TowerHanoi( int m, int i, int j ) {
  //YOUR CODE HERE
}
```

## TEST CASE
### Input
```bash
10 3 1 3
```
### Output
```bash
55
55
Move disc 1 from 1 to 3
Move disc 2 from 1 to 2
Move disc 1 from 3 to 2
Move disc 3 from 1 to 3
Move disc 1 from 2 to 1
Move disc 2 from 2 to 3
Move disc 1 from 1 to 3
```
