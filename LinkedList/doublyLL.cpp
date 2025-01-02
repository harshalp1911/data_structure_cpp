#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node (){
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
    }
   
};
// traversing in link list
void print (Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp-> next;
    }cout<<endl;
}

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d); // step 1
    temp -> next = head; // step 2
    head -> prev = temp; // step 3
    head= temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start

    if(position ==1 ){
        InsertAtHead(head, d);  
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last node
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    // creating node for d
    Node* nodeToInsert = new Node(d);

        nodeToInsert->next = temp->next;
        temp-> next-> prev = nodeToInsert;
        temp -> next =  nodeToInsert;
        nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* &head){
    
    // deleting start node 
    if(position == 1){
        Node* temp = head; 
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;  // destructor call hoga  
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        } 
        curr -> prev = NULL;
        prev ->next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main (){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head); 

    cout<<"link list insertion"<<endl;

    InsertAtHead(head, 11);
    print(head);

    InsertAtHead(head, 13);
    print(head);

    InsertAtHead(head, 18);
    print(head);

    InsertAtPosition(tail, head, 3, 36);
    print(head);

    deleteNode(3, head);
    print(head);
    cout<<"head "<< head -> data<<endl;
    cout<<"tail "<<tail -> data<<endl;

    deleteNode(4, head);
    print(head);
    cout<<"head "<< head -> data<<endl;
    cout<<"tail "<<tail -> data<<endl;


    // InsertAtTail(tail, 20);
    // print(tail);
// throwing error

}