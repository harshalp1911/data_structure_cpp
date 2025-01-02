#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    
    public:
    void bark(){
        cout<<"animal barking "<<endl;
    }   
};

class Human {
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};

// multiple inheritance karte hai
class hybrid : public Animal, public Human {
    // body of multiple inheritance

};


int main (){
    hybrid obj1;
    obj1.bark();
    obj1.speak();

    return 0;
}