#include<iostream>
using namespace std;

void func (int a, int b){
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}
int main (){
    
    func(4,5);


    return 0;
}