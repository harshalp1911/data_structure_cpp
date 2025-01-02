#include<iostream>
using namespace std;
class A {
    public:
    void func(){
        cout<<"body of func of A class"<<endl;
    }
};
class B {
    public:
    void func(){
        cout<<"function of class B"<<endl;
    }
};
class C: public A, public B {
    // body of class C
};

int main (){

    C object;
   // object.func(); // throw error of ambiguity
   object.A::func();
   object.B::func();

    return 0;
}