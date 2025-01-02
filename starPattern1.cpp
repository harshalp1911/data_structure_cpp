/* PRINT 
   *
  **
 ***
****
*/
/*#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"enter N : ";
    cin >>n;
    int i=1;
    while (i<=n)
    {
        int space= n-i;
        while (space)           // print spaces
        {
            cout<<" ";
            space = space -1;
        }
        int j=1;
        while(j<=i)            // print star 
        {
            cout<<"*";
            j=j+1;
        }
        cout<< endl;
        i=i+1;

    }
}
*/
/* PRINT 
****
***
**
*

*/
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter N: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
       int star = n-i+1;
       while (star)
       {
        cout<<"*";
        star = star-1;
       }
        
        cout<<endl;
        i=i+1;
    }
}