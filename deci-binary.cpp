#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n;
    int i =0;
    int ans = 0; 
    cout<<" enter number: ";
    cin >>n;
    while (n!=0)
    {
        int bit = n &1;
         ans = (bit * pow(10,i) ) + ans ;
        n =  n >> 1;
        i++;
       // cout<<endl;
    }
cout <<"binary number is"<< ans;
}