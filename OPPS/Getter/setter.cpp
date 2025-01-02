#include <iostream>
using namespace std;
class hero
{
private:
    int health;

public:
    char level;
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main()
{ 
    // static allocation
    
    hero ramesh;    // object of the class 'Hero'
    ramesh.level = 'C';
    cout << "health is -> " << ramesh.getHealth() << endl; // use of getter to.
    cout<<"level is "<<ramesh.level<<endl;
    ramesh.setHealth(70);  // now i want to set the value of private memeber.
    cout << endl;
    cout << "changed value of health is -> " << ramesh.getHealth() << endl;

    //dynamic allocation
    hero *b = new hero;
    b-> setLevel('P');

    cout<<"level is -> "<<(*b).level<<endl;
    //cout<<"level is : "<<(*b).<<endl;



    return 0;
}