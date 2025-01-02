#include <iostream>
using namespace std;

class Node{
public:
    // contain of node data and address
    int data;
    Node *next;

    // constructor for next node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        // freeing memory
        if(this-> next != NULL){
           delete next;
           this-> next = NULL;
        }

    }

};
void InsertAtHead(Node *&head, int d){
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d){
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

// print data of the LL
void print(Node *&head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtPosition(Node *&head, int position, int d){

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1){
        temp = temp->next;
        cnt++;
    }
    // creating node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    Node* temp = head;
    // deleting start node 
    if(position == 1){
        head = head-> next;
        // memory free of start node
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
        prev -> next = curr -> next;
        curr ->next =  NULL;
        delete curr;
    }
}
int main(){
    // created new node
    Node *node1 = new Node(10);

    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    // head pointed to new node
    Node *head = node1;
    Node *tail = node1; // single node mein head tail ek hi hoga
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(head,3, 14);
    print(head);

    deleteNode(1, head);
    print(head);


    return 0;
}