## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเขียนโปรแกรมรายละเอียดคำสั่งพื้นฐานของ Double Linked List จากโปรโตไทป์ต่อไปนี้
- AddNode เพื่อทำการสร้างโหนดใหม่ต่อท้าย Double Linked List
- InsertNode เพื่อทำการแทรกโหนดตามตำแหน่ง position
- DeleteNode เพื่อทำการลบโหนดตามตำแหน่ง position
- SwapNode เพื่อทำการสลับโหนดระหว่างตำแหน่ง position1 และ position2
- ShowFront แสดงค่าทั้งหมดภายใน Double Linked List จากหน้าไปหลัง
- ShowBack แสดงค่าทั้งหมดภายใน Double Linked List จากหลังไปหน้า


## FIX CODE
```c++
#include <stdio.h>

struct Node {
    int Data;
    struct Node *Next;
    struct Node *Back;
} typedef N;

void AddNode(N **, int *Data);
void InsertNode(N **, int *Data, int *pos);
void DeleteNode(N **, int *pos);
void SwapNode(N **, int *pos1, int *pos2);
void ShowFront(N **);
void ShowBack(N **);

int main() {
    N *start = NULL;
    int data = 0, pos1 = 0, pos2 = 0;

    AddNode(&start, &data); AddNode(&start, &data); AddNode(&start, &data);
    ShowFront(&start);
    ShowBack(&start);

    InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1);
    ShowFront(&start);

    DeleteNode(&start, &pos1); DeleteNode(&start, &pos1);
    ShowFront(&start);

    SwapNode(&start, &pos1, &pos2); ShowFront(&start);
    return 0;
}

void AddNode(N **Walk, int *Data) {
    //YOUR CODE HERE
}

void ShowFront(N **Walk) {
    //YOUR CODE HERE
}

void ShowBack(N **Walk) {
    //YOUR CODE HERE
}

void InsertNode(N **Walk, int *Data, int *position) {
    //YOUR CODE HERE
}

void DeleteNode(N **Walk, int *position) {
    //YOUR CODE HERE
}

void SwapNode(N **Walk, int *position1, int *position2) {
    //YOUR CODE HERE
}
```

## TEST CASE
### Input
```bash
Add (data) : 1
Add (data) : 2
Add (data) : 3
Insert (data pos) : 99 1
Insert (data pos) : 88 5
Insert (data pos) : 77 3
Delete (pos) : 1
Delete (pos) : 2
Swap (pos1 pos2) : 1 4
```
### Output
```bash
Show Front : 1 2 3 
Show Back : 3 2 1 
Show Front : 99 1 77 2 3 88 
Show Front : 1 2 3 88 
Show Front : 88 2 3 1 
```
