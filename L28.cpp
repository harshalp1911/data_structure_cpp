#include<iostream>
using namespace std;

void update1(int n){  // pass by value
    n++;
}

void update(int &n){  // pass by reference
    n++;
}
int main (){
    int n =5 ;
    cout<<"before n  -> "<<n<<endl;
    update1(n);
    cout<<"output of update1(pass by value)"<<n<<endl;

    update(n);
    cout<<"output of update(pass by refernce)  ->"<<n<<endl;


    return 0;
}