#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter total amount";
    cin >> amount;
    int rs100, rs50, rs20, rs1;
    switch (1)
    {
    case 1:
        rs100 = amount / 100;
        cout << "number of 100's  notes are  : " << rs100 << endl;
        amount %= 100;
    case 2:
        rs50 = amount / 50;
        cout << "number of 50's Notes are  : " << rs50 << endl;
        amount %= 50;
    case 3:
        rs20 = amount / 20;
        cout << "number of 20's notes are  : " << rs20 << endl;
    case 4:
        rs1 = amount;
        cout << "number of 1's notes are  : " << amount << endl;
        break;
    default:
        cout << "you have enter wrong value";
    }
}