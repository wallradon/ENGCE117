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



void DoubleLinkedList::ShowBack() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *current = head;
    while (current->Next != NULL) {
        current = current->Next;
    }

    while (current != NULL) {
        printf("%d ", current->Data);
        current = current->Back;
    }
    printf("\n");
}

void DoubleLinkedList::ShowFront() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->Data);
        current = current->Next;
    }
    printf("\n");
}

void DoubleLinkedList::DeleteNode() {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    int position;
    printf("Enter position to delete: ");
    scanf("%d", &position);

    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    Node *current = head;
    int currentPosition = 1;

    while (current != NULL && currentPosition < position) {
        current = current->Next;
        currentPosition++;
    }

    if (current == NULL) {
        printf("Position out of range.\n");
        return;
    }

    if (current->Back == NULL) { // ลบโหนดแรก
        head = current->Next;
        if (head != NULL) {
            head->Back = NULL;
        }
    } else if (current->Next == NULL) { // ลบโหนดสุดท้าย
        current->Back->Next = NULL;
    } else { // ลบโหนดตรงกลาง
        current->Back->Next = current->Next;
        current->Next->Back = current->Back;
    }

    delete current; // ป้องกัน memory leak
}

void DoubleLinkedList::InsertNode() {
    int data, position;
    printf("Enter data to insert: ");
    scanf("%d", &data);
    printf("Enter position to insert: ");
    scanf("%d", &position);

    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    Node *temp = new Node(data);

    if (head == NULL || position == 1) { // แทรกเป็นโหนดแรก
        temp->Next = head;
        if (head != NULL) {
            head->Back = temp;
        }
        head = temp;
        return;
    }

    Node *current = head;
    int currentPosition = 1;

    while (current->Next != NULL && currentPosition < position - 1) {
        current = current->Next;
        currentPosition++;
    }

    
    if (current->Next == NULL && currentPosition < position - 1) {
        current->Next = temp;
        temp->Back = current;
        return;
    }

    temp->Next = current->Next;
    temp->Back = current;

    if (current->Next != NULL) {
        current->Next->Back = temp;
    }

    current->Next = temp;
}

void DoubleLinkedList::AddNode() {
    int data;
    printf("Enter data to add: ");
    scanf("%d", &data);

    Node *temp = new Node(data);

    if (head == NULL) {
        head = temp;
        return;
    }

    Node *current = head;
    while (current->Next != NULL) {
        current = current->Next;
    }

    current->Next = temp;
    temp->Back = current;
}