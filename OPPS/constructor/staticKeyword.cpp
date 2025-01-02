#include <iostream>
using namespace std;
class Hero {
     // simple constructor 
     public:
     int health;
     char level;
     static int timeToComplete; // static keyword

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
        cout<<"level -  "<< this -> level<<endl;
    }
    static int random(){            // static function
        return timeToComplete;
    }

    // destructor
    ~Hero(){
        cout<<"destructor function called"<<endl;
    }


};
int Hero::timeToComplete = 10;

int main (){
    cout<<"static keyword value ";
    cout<<Hero::timeToComplete<<endl;
    cout<< Hero::random()<<endl; // static fucntion call
    return 0;

}