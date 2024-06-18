#include <iostream>
using namespace std;

void selection(int arr[], int n)            // SELECTION SORT FUNCTION
{ 
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArr(int arr[], int n)          // PRINTING ARRAY
{
    for (int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
      cout << endl;
}
int main()                              // MAIN FUNCTION
{
    int arr[6] = {5, 1, 3, 7, 2, 8};

    selection(arr, 6);
    cout << "sorted array :" << endl;
    printArr(arr, 6);
}