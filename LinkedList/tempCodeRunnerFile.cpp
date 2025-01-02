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