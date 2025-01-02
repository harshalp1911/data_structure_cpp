#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node () {
        int value = this->data;
        if (this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void InsertNode(Node* &tail, int element, int d)
{
    // assuming that the element is present in the list

    // empty Node
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty node
        // assuming element present in the list
        Node *curr = tail;

        while (curr -> data != element){
            curr = curr -> next;
        }
        // out of loop means element found
        Node* temp = new Node(d);
        temp -> next = curr ->  next;
        curr -> next = temp;
    }
}
void print(Node *tail){
    Node *temp = tail;
    do{
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail , int value){
    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    else{
        // non empty case
        // assuming value is present in the list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr-> data != value){
            prev = curr;
            curr = curr -> next;
        }
        // out of loop means element found
        prev -> next = curr -> next;

        if(curr == prev){  // single node 
            tail = NULL;
        }
        if(tail == curr){
            tail =  prev;
        }
        curr -> next = NULL;
        delete curr;
         



    }
}

int main(){
    Node* tail = NULL;

    // insert in a empty node
    InsertNode(tail, 5, 3);
    print(tail);

    InsertNode(tail, 3, 6);
    print(tail);
    
    InsertNode(tail, 3, 4);
    print(tail);

    InsertNode(tail, 6, 7);
    print(tail);

    deleteNode(tail, 3);
    print(tail);



}