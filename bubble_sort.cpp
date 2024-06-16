#include <iostream>
using namespace std;

void bubbleSort (int arr[], int n){             // BUBBLE SORT FUNCTION
    for(int i = 1; i < n; i ++){
        // for round 1 se leke n-1 tk

        for(int j = 0; j < n-i; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArr(int arr [], int n){               // PRINT THE ARRAY FUNCTION
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){                                    // MAIN FUCNTION
    int arr[6] = {10,1,7,6,14,9};
    bubbleSort(arr, 6);
    cout<<"array after sorting is"<<endl;
    printArr(arr, 6);

return 0;
}