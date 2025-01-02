//POWER OF TWO ANOTHER APPRAOCH
#include <iostream>
using namespace std;
void power_2(int n){
    if((n & (n-1)) == 0){
        cout<<"number is power of two"<<endl;
    }
    else 
    {
        cout<<"not power of two"<<endl;
    }
}
int main (){
    int n;
    cout<<"enter number ";
    cin>>n;
    power_2(n);
    return 0;
    
}