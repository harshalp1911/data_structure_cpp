
// PROGRAM ONE

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter N : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << (row - col + 1);
            col = col + 1;
        }
         cout << endl;
         row = row + 1;
    }

}

                            //PROGRAM TWO
/*#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter N : ";
    cin>>n;
    for (int i=1; i<=n;i++)
    {
        for (int j=i; j>=1; j--)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
*/

// PROGRAM THREE

/*
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
        while (j <= n)
        {
            char ch='A' + i - 1;
            cout << ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
// PROGRAM FOUR
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter N :";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j=1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
*/
/*
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch='A';
    cout << "enter N: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        //char ch = 'A';
        while (j <= n)
        {
            // char ch='A';
            
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
*/