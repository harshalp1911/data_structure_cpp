// main program structure
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "enter N :";
    cin >> n;
    while (i <= n)
    {

       int j = 1;
        while(j<=n)
        {
            cout << "* ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }

}
