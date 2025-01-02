#include<iostream>
using namespace std;
class human {
    public:
    int height;
    int weight;
    int age;


};
// inherited under public mode
class female: public human {
    public:
    string color;

    void sleep(){
        cout<<"ladki neendh mein hai"<<endl;
    }

};



int main () {
    female object1;
    cout<< object1.height << endl;
    cout<< object1.weight << endl;
    cout<< object1.age << endl;
    cout<< object1.color << endl;
    object1.sleep();



    return 0;
}