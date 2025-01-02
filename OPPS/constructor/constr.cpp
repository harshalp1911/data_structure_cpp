#include<iostream>
using namespace std;
class Hero {
    public:
    int health;
    char level;

    // simple constructor 
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

};
int main (){
    Hero S(70, 'A');
    S.print();

    //copy contuctor call
    Hero R(S);  
    // r.health = s.health;
    // r.level = s.level;

    R.print();
    

    // cout<<"first line"<<endl;

    // // object created statically
    // Hero ramesh(10);
    // cout<<"address of ramesh "<<&ramesh<<endl;
    // cout<<"third  line "<<endl;

    // cout<<endl<<endl;

    // //object created dynamically
    // Hero *h = new Hero;

    return 0;
}