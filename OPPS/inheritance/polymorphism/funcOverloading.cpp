#include<iostream>
using namespace std;
class A {
    public:
    void sayHello(){
        cout<<"Hi im harshal"<<endl;
    }

    // function overloading 
    void sayHello(int a){
        cout<<"int a wala function"<<endl;
    }

};

int main (){
    A obj;
    obj.sayHello();
    obj.sayHello(10);
    return 0;
}