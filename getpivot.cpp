#include<iostream>
using namespace std;
int getPivot(int arr[], int n){                 // GET PIVOT ELEMENT FUNC
    int s =0; 
    int e = n-1;
   
    while (s<e){
         int mid = s + (e-s)/2;
        if(arr[mid]> arr[0]){
            s = mid +1;
        }
        else {
            e = mid;
        }
    }
    return s;
}
int main (){                                    // MAIN FUNCTION
    int arr[5] = {3,8,10,1, 17};
    cout<<"pivot is "<<getPivot(arr, 5)<<endl;
    return 0;
}