#include <iostream>
using namespace std;
 int main()
 { 
    char ch;
    cout<<"enter the value "<<endl;
    cin>>ch;
    if(ch>= 'A' && ch<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"Lowercase"<<endl;
    }
    else
    {
        cout <<"Numeric"<<endl;
    }
 }