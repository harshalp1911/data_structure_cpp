// BINARY TO DECIMAL CONVERTION PROGRAM

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int ans = 0, i=0;
    cout << "enter binary number : ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
            //i++;
        }
        n = n / 10;
        i++;
    }
    cout << "decimal number is " << ans;
}