#include <iostream>

// #include "hero.cpp"  we have created class in other file and got access of it by this line
using namespace std;
class hero
{
    // properties/ data members
    public:
    int health;
   // private :
    char level;
    
};

int main()
{
    
    hero ramesh;
    //how to set the values
    ramesh.health = 70;
    ramesh.level = 'A';
    // cout << "size -> " << sizeof(h1) << endl;
    cout<<"health is "<<ramesh.health<<endl;
    cout<<"level is "<<ramesh.level<<endl; 
    // this is will throw error bcoz it is declared as a private which means we cannot access it out of the class 
    
    return 0;
}