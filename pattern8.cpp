/* write porgram for following output
A B C D
B C D E
C D E F
D E F G
*/

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char ch = i + j + 'A' - 2;
            cout << ch<< " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
*/

/*
A 
B B 
C C C 
D D D D 
*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter N: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch= 'A'+ i-1;
            cout << ch<<" ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
