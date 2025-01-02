#include<iostream>
using namespace std;

// multi level inheritance Animal -> dog-> germanShep
class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking. "<<endl;
    }
};

class Dog: public Animal {
    // animal se inherit hua hai

};

class germanShep: public Dog { 

    // dog se inherite hua hai

};


int main (){
    germanShep g;
    g.speak();

    return 0;

}