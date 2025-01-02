#include <iostream>
using namespace std;

int max(int a[], int n){
   
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
      
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
} 

int min(int a[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int size ;
    cout<<"enter size of the array";
    cin>>size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    int a = max(num,size);
    int b = min(num,size);
    cout << "maximum of the array is " << a << endl;
    cout << "manimum of the array is " << b << endl;
}