#include<iostream>
using namespace std;

void merge(int* arr, int s , int e){
    int mid = s + (e-s)/2;
    int len1 =  mid- s+1;
    int len2 = e - mid;

    //create two temporary arrays
    int* first = new int[len1];
    int* second = new int[len2];


    // copying element in those arrays

    for (int i =0;  i < len1; i++){
        first[i] = arr[s+i];
    }

    for (int j =0; j < len2; j++){
        second[j] = arr[mid + 1 + j];
    }

    // merge two sorted arrays and sort them too

    int index1 = 0;
    int index2 = 0;

    int mainArrIndex = s;

    while (index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
             arr[mainArrIndex++] = first[index1++];
        }
        else {
            arr[mainArrIndex++] = second[index2++];
        }
    }

    // copy remaining element of first 
    while(index1 < len1){
        arr[mainArrIndex++] = first[index1++];
    }
    // copy remaining element of second
    while(index2 < len2){
        arr[mainArrIndex++] = second[index2++];
    }

    // releasing memory
    delete [] first;
    delete [] second;

}


void mergeSort(int* arr, int s, int e){
    // base case 
    if(s >= e) return;

    int mid=  s + (e-s)/2;

    // left part
    mergeSort(arr,s, mid);

    // right part
    mergeSort(arr, mid +1, e);

    // merge two arrays i.e right and left

    merge(arr, s,e);

}

void printArr(int* arr, int size){
    for(int i =0; i < size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}


// driver code 
int main (){

    int arr[7] = {38, 27, 43, 3, 9, 82, 10};

    cout<<"before sorted"<<endl;
    printArr(arr, 7);

    mergeSort(arr, 0 , 6);

    cout<<"after sorted"<<endl;
    printArr(arr,7);

    
}