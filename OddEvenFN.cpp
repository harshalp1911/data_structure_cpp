#include <iostream>
using namespace std;

bool isEven(int a)  // ODD EVEN FUNCTION
{
    if (a & 1)
    {
        return 0; // 0  bool value for odd nnumber
    }
    else
    {
        return 1;
    }
}

int main() // main function starts
{

    int num;
    cout << "enter Number:";
    cin >> num;
    int ans = isEven(num);
    if (ans == 0)
    {
        cout << "number is ODD" << endl;
    }
    else
    {
        cout << "Number is EVEN" << endl;
    }
}
