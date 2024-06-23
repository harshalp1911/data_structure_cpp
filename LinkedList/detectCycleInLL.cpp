
#include <iostream>
#include<map>
using  namespace std;

bool detectLoop(Node *head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool>visited;

    Node *temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
            return 1;
        }
        visited[temp] = true;
        temp = temp ->next;
    }
    return false;
}
