// SIMPLE  CALCULATOR USING SWITCH 
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "enter the value of A : " << endl;
    cin >> a;
    cout << "enter the value of B: " << endl;
    cin >> b;

    cout << " choose operation(+,-,*,/,%)  ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':

        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << " wrong input bro" << endl;
    }
}