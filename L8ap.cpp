#include <iostream>
using namespace std;
int AP(int n)
{
    int ans = 3 * n + 7;
    return ans;
}
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    cout << "ans is " <<AP(n)<<endl;
    return 0;
}