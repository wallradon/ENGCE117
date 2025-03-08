## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเขียนโปรแกรมเพื่อสร้าง Double Linked List โดยใช้หลักการของ Object-oriented Programming เพื่อดำเนินการดังต่อไปนี้
- สร้างคลาส Node เพื่อใช้เป็นคลาสแม่
- สร้างคลาส DoubleLinkedList เพื่อสืบทอดคลาสแม่
- เขียนรายละเอียด Method พื้นฐานของ Double Linked List อันได้แก่ AddNode, InsertNode, DeleteNode, ShowFront, Showback

## FIX CODE
```c++
#include <stdio.h>

class Node {
    public:
        int Data;
        Node *Next;
        Node *Back;
    public:
        Node(int data = 0) : Data(data), Next(NULL), Back(NULL) {}
} ;

class DoubleLinkedList : Node {
    private:
        Node *head;
    public:
        DoubleLinkedList() : head(NULL) {}
        void AddNode() ;
        void InsertNode() ;
        void DeleteNode() ;
        void ShowFront() ;
        void ShowBack() ;
} ;

int main() {
    DoubleLinkedList A, B;
    A.AddNode(); A.AddNode(); A.ShowFront();
    A.InsertNode(); A.InsertNode(); A.ShowFront();
    A.DeleteNode(); A.DeleteNode(); A.ShowFront();
    printf( "---\n" ) ;
    B.AddNode() ; B.AddNode() ; B.AddNode() ; B.ShowBack() ;
    return 0;
}

void DoubleLinkedList :: ShowBack() {
    //YOUR CODE HERE
}

void DoubleLinkedList :: ShowFront() {
    //YOUR CODE HERE
}

void DoubleLinkedList :: DeleteNode() {
    //YOUR CODE HERE
}

void DoubleLinkedList :: InsertNode() {
    //YOUR CODE HERE
}

void DoubleLinkedList :: AddNode() {
    //YOUR CODE HERE
}

```

## TEST CASE
### Input
```bash
Add (data) : 57
Add (data) : 19
Insert (data pos) : 23 2
Insert (data pos) : 14 8
Delete (pos) : 3
Delete (pos) : 1
Add (data) : 1
Add (data) : 7
Add (data) : 13
```
### Output
```bash
Show Front : 57 19 
Show Front : 57 23 19 
Show Front : 23 
---
Show Back : 13 7 1 
```
