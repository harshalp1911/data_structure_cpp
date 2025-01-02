#include <iostream>
using namespace std;

int fact(int n)                      // FACTORIAL FUNCTION
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)              // nCr FUNCTION 
{
    int num = fact(n);
    int denom = fact(r) * fact(n - r);
    return num / denom;
}
int main()                          // MAIN FUNCTION                         
{
    int n, r;
    cout << "enter the value of N and R" << endl;
    cin >> n >> r;
    cout << "answer is : " << nCr(n, r);
    return 0;
}