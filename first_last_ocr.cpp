#include<iostream>
using namespace std;
int firstOcc(int arr[], int n , int target){                // FIRST OCCURENCES FUNC
    int s=0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<= e){

        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if (target > arr[mid]){
            s = mid +1;
        }
        else if (target< arr[mid]){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n , int target){                 // LAST OCCURENCES FUNC
    int s=0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<= e){

        if(arr[mid] == target){
            ans = mid;
            s = mid +1;
        }
        else if (target > arr[mid]){
            s = mid +1;
        }
        else if (target< arr[mid]){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main (){                                                // MAIN FUNCTION
    int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout <<"first occurence at index "<<firstOcc(arr, 11, 3)<<endl;
    cout <<"first occurence at index "<<lastOcc(arr, 11, 3);
    return 0;
}
