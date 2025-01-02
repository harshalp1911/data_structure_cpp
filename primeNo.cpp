#include <iostream>
using namespace std;

int main()
{

    int i = 2, n;
    cout << "enter the number: " << endl;
    cin >> n;
// printing multiple times 
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "number is not prime for" <<i<< endl;
        }
        else
        {
            cout << "number is prime: "<<i<<endl;
        }
        i = i + 1;
    }
}