#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter N : ";
    cin >> n;
    cout<<endl;
    int i = 1;
    while (i <= n)
    {
        int j = n - i + 1;
        int start = 1;
        while (j)
        {
            cout << start << " ";
            start = start + 1;
            j = j - 1;
        }
        int star = i - 1;
        while (star)
        {
            cout << "* ";
            star = star - 1;
        }
        int star2 = i - 1;
        while (star2)
        {
            cout << "* ";
            star2 = star2 - 1;
        }
        int count = n - i + 1;
        while (count)
        {
            cout << count << " ";
            count = count - 1;
        }
        cout << endl;
        i = i + 1;
    }
}