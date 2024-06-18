#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){                  // BINARY SEARCH FUNCTION
int s=0, e = size -1; 

while(s <= e){
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        s = mid;
        e = mid-1;
    }
    else if (key>arr[mid]){
        s = mid +1;
    }
    else if (key< arr[mid]){
        e = mid - 1;
    }
}
return s;
}

int main (){                                                    // MAIN FUNCTION
    int arr[5] = {3,5,7,8,9};
    cout<< "found at index " <<"arr[" <<binarySearch(arr, 5, 7)<<"]"<<endl;
    

    return 0;
}