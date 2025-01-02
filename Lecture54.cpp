#include <iostream>
#include<stack>
using namespace std;

class Stack{
        //data members i.e properties
    public:
        int* arr;
        int top;
        int size;

        
        // behaviour
        Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;


        } // constructor 

    // push function
    void push(int element) {  

        if(size - top > 1){
            top++;
            arr[top] = element;
        }

        else{
            cout<< "stack overflow"<< endl;
        }

    }

    // pop function
    void pop() {
        if(top >= 0){
            top --;
        }
        else{
            cout<< "stack underflow"<<endl;
        }

    }

    // peek/top function
    int peek() {
        if(top >=0){
            return arr[top];
        }
        else {
            cout<< "stack is empty"<< endl;
        }

    }


    // is empty function
    bool isEmpty() {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};
int main (){
    Stack st(5);

    st.push(3);
    st.push(4);
    st.push(8);

   cout<<"element at top "<<  st.peek()<<endl;

   st.pop();
   cout<<"element at top after 1st pop "<< st.peek()<<endl;



    

    return 0;

}