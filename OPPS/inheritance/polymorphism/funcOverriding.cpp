#include<iostream>
using namespace std;
class Animal {
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }

};
// inherit from Animal parent class
class Dog: public Animal{
    public:
    void speak(){
        cout<<"barking "<<endl;
    }

};

int main (){
    Dog obj;
    obj.speak();


    return 0;
}