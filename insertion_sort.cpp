#include <iostream>
using namespace std;

void insSort(int arr[], int n)              // insertion sort function 
{
    int j;
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--){
            if (arr[j] > temp){
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void printArr(int arr[], int n)             // printing array
{
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()                                  // Main Function
{
    int arr[6] = {8, 6, 4, 9, 2, 1};
    
    cout<<"array before sorting is : "<<endl;
    printArr(arr, 6);

    cout << "array after sorting are :" << endl;
    insSort(arr, 6);
    printArr(arr, 6);

    return 0;
}