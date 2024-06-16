#include <iostream>
using namespace std;
void merge(int *arr, int s, int e){         // funtion 1

    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create two temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copy element to temp arrays
    for (int i = 0; i < len1; i++){
        first[i] = arr[s + i];
    }
    for (int j = 0; j < len2; j++){
        second[j] = arr[mid + 1 + j];
    }
    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainIndex = s;
    while(index1 < len1 && index2< len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
        }  
    }
    // copy remaining element of first array if any
    while(index1 < len1){
        arr[mainIndex++] = first[index1++];
    }

    // copy remaining element of second array if any
    while(index2 < len2){
        arr[mainIndex++]= second[index2++];
    }
    delete [] first;
    delete [] second;
}

void mergeSort(int *arr, int s, int e){             // function 2
    // base case
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    // left part to be sort
    mergeSort(arr, s, mid);

    // right part to be sort
    mergeSort(arr, mid + 1, e);

    // merge both parts
    merge(arr, s, e);
}
int main(){                         // main function

    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr, 0, 6);

    for (int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}