// PRIME NUMBER CHECK 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;
    bool rem = 1;                   // intialise rem as true
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)             // check all numbers when remainer is zero rem is zero
        {
            rem = 0;
            break;
        }
    
    }
        if (rem == 0)
        {
            cout << "is not prime" << endl;
        }
        else
        {
            cout << "is Prime" << endl;
        }
}
