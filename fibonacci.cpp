#include <iostream>
using namespace std;
int main()
{
    int n;
    int next;
    cout << "enter N: ";
    cin >> n;

    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        next= a+b;
        cout<<next<<" ";
        a=b;
        b= next;

    }
}