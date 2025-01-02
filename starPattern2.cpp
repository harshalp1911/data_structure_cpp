/*
PRINT 
*/
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter N :";
    cin >>n;
    int i;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space =space -1;
        }
        int star = n-i+1;
        while (star)
        {
            cout<<"*";
            star = star-1;
        }
        cout<<endl;
        i=i+1;
    }
}