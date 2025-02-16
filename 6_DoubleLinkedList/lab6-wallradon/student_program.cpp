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
    int data = 0, pos1 = 0, pos2 = 0, pos = 0 ;

    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, &data); 
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, &data); 
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, &data);
    ShowFront(&start); ShowBack(&start);

    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos1 ) ;InsertNode(&start, &data, &pos1); 
    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos1 ) ;InsertNode(&start, &data, &pos1); 
    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos1 ) ;InsertNode(&start, &data, &pos1);
    ShowFront(&start);

    printf( "DeleteNode (pos) : " ) ; scanf( "%d", &pos1 ) ; DeleteNode(&start, &pos1) ;
    printf( "DeleteNode (pos) : " ) ; scanf( "%d", &pos1 ) ; DeleteNode(&start, &pos1) ;
    ShowFront(&start);
    printf( " SwapNode (pos1 pos2) : " ) ; scanf( "%d %d", &pos1, &pos2 ) ;
    SwapNode(&start, &pos1, &pos2) ; 
    ShowFront(&start) ;
    return 0 ;
}

void AddNode(N **Walk, int *Data) {
    N *temp = NULL ;
    while ( *Walk != NULL ) {
        temp = *Walk ;
        Walk = &(*Walk)->Next ;
    }//end while

    *Walk = new N ;
    (*Walk)->Data = *Data ;
    (*Walk)->Next = NULL ;
    (*Walk)->Back = temp ;
}//end function

void ShowFront(N **Walk) {
    N *current = *Walk ;
    printf("Show Front : ") ;
    while (current != NULL) {
        printf("%d ", current->Data) ;
        current = current->Next ;
    }
    printf("\n") ;
}//end function

void ShowBack(N **Walk) {
   N *current = *Walk ;
    while ( current->Next != NULL ) {
        current = current -> Next ;
    }
    printf( "Show Back : " ) ;
    while ( current != NULL ) {
        
        printf( "%d ", current->Data ) ;
        current = current->Back ;
    }
    printf("\n") ; 
}//end function

void InsertNode(N **Walk, int *Data, int *position) {

    N *temp = new N ;
    temp->Data = *Data ;
    temp->Next = NULL ;
    temp->Back = NULL ;

    N *current = *Walk ;
    int currentPosition = 1 ;

    while (current != NULL && currentPosition < *position) {
        current = current->Next ;
        currentPosition++ ;
    }
    
    if (current == NULL) {
        //ต่อท้าย
        N *tail = *Walk ;
        while (tail->Next != NULL) {
            tail = tail->Next ;
        }
        tail->Next = temp ;
        temp->Back = tail ;
    } else {
        temp->Next = current ;
        temp->Back = current->Back ;
        if (current->Back != NULL) {
            current->Back->Next = temp ;
        } else {
            *Walk = temp ; 
        }
        current->Back = temp ; 
    }//end if

}//end function

void DeleteNode(N **Walk, int *position) {
    if (*Walk == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    } //end if

    N *current = *Walk;
    int currentPosition = 1;

    //หาโหนด
    while (current != NULL && currentPosition < *position) {
        current = current->Next;
        currentPosition++;
    }

    if (current->Back == NULL) {
        *Walk = current->Next; 
        if (current->Next != NULL) {
            current->Next->Back = NULL;
        }//end if
    }
    else if (current->Next == NULL) {
        current->Back->Next = NULL ;
    } 
    else {
        current->Back->Next = current->Next ;
        current->Next->Back = current->Back ;
    }//end if

    // ลบโหนด
    delete(current);
}//end function

void SwapNode(N **Walk, int *position1, int *position2) {
    N *start = *Walk, *node_one = NULL, *node_two = NULL ;
    // printf("start swap = %d\n" , start->Data ) ;
    int pos = 1, temp = 0 ;
    while ( start != NULL ) {
        if (pos == *position1) node_one = start ;
        if (pos == *position2) node_two = start ;
        start = start->Next ;
        // printf( "pos = %d\n", pos ) ;
        pos++ ; 
    }
    
    temp = node_one->Data ;
    node_one->Data = node_two->Data ;
    node_two->Data = temp ;

    printf("node_one = %d [%d]\n" , node_one->Data, *position1 ) ;
    printf("node_two = %d [%d]\n" , node_two->Data, *position2 ) ;
    
}//end function
