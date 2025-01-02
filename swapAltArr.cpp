#include <iostream>
using namespace std;

void printArr(int arr[], int n){                    // PRINT ARRAY FUNCTION
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void altRev(int arr[], int size)                    // ALTERNATE REVERSE ARRAY FUNCTION
{
    for (int i = 0; i < size; i+=2){
        if (i + 1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()                                          // MAIN FUNCTION
{
    int arr[8] = {3, 4, 6, 7, 8, 1, 9, 5};
    //cout<<"array before swaping was: "<<endl;
  //  printArr(arr,8);
cout<<"array before swap."<<endl;
    printArr(arr,8);
cout<<"array after swap."<<endl;
    altRev(arr, 8);
    printArr(arr,8);

    return 0;
}