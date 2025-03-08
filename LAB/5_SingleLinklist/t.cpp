#include <stdio.h>

struct Node {
    int Data;
    struct Node *Next;
} typedef N;

void AddNode(N **, int Data);
void InsertNode(N **, int Data, int position);
void DeleteNode(N **, int position);
void ShowNode(N **);

int main() {
    N *start = NULL;
    int data = 0, pos = 0 ;
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, data);
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, data);
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, data);
    ShowNode(&start);

    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    // printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    // printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    ShowNode(&start);

    // printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    // printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    // printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    // ShowNode(&start);

    return 0;
}

void AddNode(N **Walk, int Data) {
     while ( *Walk != NULL ) {
        Walk = &(*Walk)->Next ;
    }//end Walk
    *Walk = new N ;
    ( *Walk )->Data = Data ;
    ( *Walk )->Next = NULL ;
}


void ShowNode(N **Walk) {
    N *showstart = *Walk ;
    // printf("test%d \n", ( showstart )->Next->Data) ;
    while ( showstart != NULL ) {
        printf("%d ", ( showstart )->Data) ;
        showstart = ( showstart )->Next ;
    }
    printf("\n") ;
}

void InsertNode(N **Walk, int Data, int position) {
     N *temp0 = new N;  // สร้างโหนดใหม่
    temp0->Data = Data;
    
    if (position == 1) {  // แทรกที่หัว
        temp0->Next = *Walk;
        *Walk = temp0;
    } else {
        N *temp1 = *Walk;
        // เดินทางไปยังโหนดก่อนตำแหน่งที่จะเพิ่ม
        for (int i = 1; i < position - 1 && temp1 != NULL; i++) {
            temp1 = temp1->Next;
        }
        
        
        printf("test %d \n", ( temp1 )->Next->Data) ;
        // ตอนนี้ temp1 ชี้ไปที่โหนดก่อนที่จะต้องแทรก
        temp0->Next = temp1->Next;  // เชื่อมโยง temp0 กับโหนดถัดไป
        temp1->Next = temp0;  // เชื่อมโยง temp1 กับ temp0
        printf("test2 %d \n", ( temp1 )->Next->Data) ;
    }
    
}

void DeleteNode(N **Walk, int position) {
    //YOUR CODE HERE
}
