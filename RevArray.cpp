#include <iostream>
using namespace std;

void printArray(int arr[], int n)                   // PRINT ARRAY FUNCTION
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void reverse(int arr[], int n)                      // REVERSE ARRAY FUNCTION
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()                              // MAIN FUNCTION
{
    int arr[6] = {5, 6, 7, 8, 3, -1};
    int brr[5] = {7, 3, 1, 9, 2};
    cout<<"array before reversing :"<<endl;
    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int j = 0; j < 5; j++){
        cout << brr[j] << " ";
    }
    cout << endl;

    reverse(arr, 6);
    reverse(brr, 5);
    cout<<"elements after reversing are :"<<endl;

    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}