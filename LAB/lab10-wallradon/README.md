## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
เขียนคำสั่งในการสร้างฟังก์ชันดังต่อไปนี้
- SetArray เพื่อรับค่าเข้าไปใส่ในอาเรย์
- PrintArray เพื่อทำการแสดงค่ายภายในอาเรย์
- BinarySearch เพื่อทำการค้นหาข้อมูลภายในอาเรย์ (ที่ถูกจัดเรียงเรียบร้อยแล้ว) ให้ได้ O(log n)
- MergeSort เพื่อทำการจัดเรียกข้อมูล ให้ได้ O(n∙log n) โดยฟังก์ชันนี้จะทำการแยกปีกซ้าย ปีกขวา และทำการรวมในภายหลัง
- Merge เพื่อทำการรวมเซลเข้าด้วยกัน

## FIX CODE
```c++
#include <stdio.h>
void SetArray( int **, int *n ) ;
void PrintArray( int [], int n, char comment[ 20 ] ) ;
int BinarySearch( int [], int n, int find ) ;
void MergeSort( int t[], int k ) ;
void Merge( int *u, int m, int *v, int n, int *t ) ;

int main() {
    int n = 0, pos = -1, find = -1, *data ;
    SetArray( &data, &n ) ;     PrintArray( data, n, "Origin" ) ;
    MergeSort( data, n ) ;      PrintArray( data, n, "Sort" ) ;
    printf( "Search (value) : " ) ;
    scanf( "%d", &find ) ;
    pos = BinarySearch( data, n, find ) ;
    printf( "FOUND %d in POSITION = Arr[%d]\n", data[pos], pos ) ;
    return 0 ;
}

void PrintArray( int *Arr, int n, char comment[ 20 ] ) { //TODO: comment คือข้อความที่อยากแสดงตรงส่วนหัวของชุดข้อความ
    //YOUR CODE HERE
}

void SetArray( int **Arr, int *n ) {
    //YOUR CODE HERE
}

int BinarySearch( int arr[], int n, int find ) {
    //YOUR CODE HERE
}

void MergeSort( int t[], int k ) {
    //YOUR CODE HERE
}

void Merge( int *u, int m, int *v, int n, int *t ) {
    //YOUR CODE HERE
}
```

## TEST CASE
### Input
```bash
Enter Arr size : 5
Arr[0] : 47
Arr[1] : 13
Arr[2] : 28
Arr[3] : 32
Arr[4] : 66
Search (value) : 47
```
### Output
```bash
Origin : 47 13 28 32 66 
Sort : 13 28 32 47 66 
FOUND 47 in POSITION = Arr[3]
```
