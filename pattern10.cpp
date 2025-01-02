#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter N  : ";
    cin >> n;
    int i = 1;
    while (i <= n) // print rows
    {
        int space = n - i;
        while (space) // print spaces
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)      // print first triangle
        {
            cout << j;
            j = j + 1;
        }
        int k = i - 1;
        while (k)      // print second triangle
        {
            cout << k;
            k = k - 1;
        }
        cout<<endl;
        i=i+1;
    }
}