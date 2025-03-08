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
    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    ShowNode(&start);

    printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    ShowNode(&start);

    return 0 ;
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
    N *temp0 = new N ;
    temp0->Data = Data ; //เลขใหม่

    if ( position == 1 ) {
        temp0->Next = *Walk ;
        *Walk = temp0 ;
    }else if ( position > 1 ) {

        N *temp1 = *Walk ;
        for ( int i = 1 ; i < position - 1 && temp1 != NULL ; i++ ) {
            temp1 = temp1 -> Next ;
        }//end for position
        temp0->Next = temp1->Next ;
        temp1->Next = temp0 ;
        // printf("test2 %d \n", ( temp1 )->Next->Data) ;

    }//end if position 1
}

void DeleteNode(N **Walk, int position) {
    N *tempDel1 = *Walk ;
    if ( position == 1 ) {
        *Walk = tempDel1->Next ;
        // printf("test2 %d \n", ( *Walk )->Next->Data) ;
        delete tempDel1 ;
    }else if ( position > 1 ) {
        N *tempDel2 = NULL ;
        for ( int i = 1 ; i < position && tempDel1 != NULL ; i++ ){
            tempDel2 = tempDel1 ;
            tempDel1 = tempDel1->Next ;
        }//end for
        tempDel2->Next = tempDel1->Next ;
        delete tempDel1 ;
    }
    
    
}
