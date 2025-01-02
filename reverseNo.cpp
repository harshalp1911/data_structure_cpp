#include<iostream>
using namespace std;
int main ()
{
    int n;
    int rev =0;
    cout<<"enter number : ";
    cin>>n;

    while(n!=0)
    {
        int digit = n%10;           // gives individual digits
        rev = (rev *10) + digit;    // gives the reverse of the number
        n = n/10;                   // remove the obtained digit from the number
    }
    cout<<endl;
    cout <<"reverse number is  :"<< rev;
}