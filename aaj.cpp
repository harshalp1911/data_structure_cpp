#include<iostream>
using namespace std;
int main (){
    int rev =0;
    int num;
    cout<<"enter number";
    cin>>num;
    while(num!=0){
        int digit = num % 10;
        rev = rev *10 + digit;
        num = num /10;
    }
    cout<<"reverse is "<<rev<<endl;
    return 0;
}