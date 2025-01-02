#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter N : " << endl;
    cin >> n;

    int i = 1, sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "sum of N is :" << sum << endl;
}
/*#include <iostream>
using namespace std;
int main ()
{
    int n , a=1,l,sum;
    cout<<"enter N :"<<endl;
    cin>>n;
    l=n;
    sum = n*(a+l)/2;
    cout<<"sum of N number is "<<sum<<endl;
}*/