#include <iostream>
using namespace std;
class Hero {
     // simple constructor 
     public:
     int health;
     char level;
    Hero(){
        cout<< "constructor called during object creation "<<endl;
    }
    
    // parameterised constructor
    Hero(int health){
        cout<<"this address "<<this<<endl;
        this -> health = health;
    }
    Hero (int health, char level){
        this ->health = health;
        this-> level = level;
    }
    void print(){
        cout<<"health - "<< this-> health<<endl;
        cout<<"level -  "<<this -> level<<endl;
    }

    // destructor
    ~Hero(){
        cout<<"destructor function called"<<endl;
    }


};

int main (){
    
    //statically created
    Hero a;

    //dynamically created
    Hero *b = new Hero(); 
    delete b;
    // dynamic mein manually destructor ko call krna padta hai,

    return 0;

}