#include <iostream>
using namespace std;

int power(int num1, int num2) // passing the parameters
{
    int ans = 1;
    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans; // function return the value
}
int main()
{
    int a, b;
    cout << "enter a and b ";
    cin >> a >> b;
    int ans = power(a, b); // function call
    cout << "answer is : " << ans;
    return 0;
}