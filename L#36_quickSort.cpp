#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];


    int cnt = 0;
    // finding right place for pivot
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    // placing pivot at the right place
    int pivotIndex =  s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // right and left part sorting and handling

    int i = s , j = e;
    while(i < pivotIndex && j > pivotIndex){
        // left part
        while(arr[i] < pivot){
            i++;
        }
        // right part
        while(arr[j] > pivot){
            j--;
        }
    // if they are not in place swap them with each other
        if(i < pivotIndex && j > pivotIndex){
        swap(arr[i++], arr[j--]);
        }
    } 
    return pivotIndex;
}

// QUICK SORT FUNCTION
void quickSort(int arr[], int s , int e){
    // base case
    if(s >= e){
        return;
    }
    // partition point
    int p = partition(arr, s, e);

    // recursive call

    quickSort(arr,s, p-1);      // left part of array.
    quickSort(arr, p+1, e);    // right part of array.
} 

// PRINT FUNCTION
void print(int arr[], int size){
    for(int i =0; i < size; i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
}


int main (){

    int arr[8] = {23,56,1,45,15,8,4,9};
    cout<< "before sorting"<<endl;

    print(arr, 8);

    cout<<"after sorting "<<endl;
    quickSort(arr, 0, 7);
    print(arr, 8);

    return 0;
}