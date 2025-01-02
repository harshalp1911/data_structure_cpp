#include<iostream>
using namespace std;
class A {
    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"inside funtion 2"<<endl;
    }

};
class C: public A{
    public:
    void func3(){
        cout<<"inside function 3 "<<endl;
    }
};

int main (){
    A object1;
    object1.func1();
   
    C object2;
    object2.func1();
   // object2.func2();
    object2.func3();
    
    
     return 0;
}