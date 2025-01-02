/*PRINT THIS PATTERN
1 2 3 
4 5 6 
7 8 9
*/
#include <iostream>               // PROGRAM ONE
using namespace std;
int main()
{
    int n;
    int count = 1;
    cout << "enter N: ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}



/* PRINT THIS PATTERN 
* 
* * 
* * * 
* * * * 
*/
/*#include <iostream>                         // PROGRAM 2ND ONE SIDE TRIANGLE
using namespace std;
int main ()
{
    int n;
    cout<<"enter N : ";
    cin>>n;

    int row =1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<< "* ";
            col= col +1;
        }
        cout<< endl;
        row = row+1;
    }
}
*/



/*  PRINT THIS PATTERN
1 
2 2 
3 3 3 
4 4 4 4*/

/*#include <iostream> 
using namespace std;
int main()
{
    int n;
    cout << "enter N :";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;

    }
}
*/