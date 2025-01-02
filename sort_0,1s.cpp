#include<iostream>
using namespace std;

void print_arr(int arr[], int size){            // function to print array
    for(int i =0; i<=size-1; i++){
        cout <<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int size){              // function to sort the array 
   int i =0;
   int j = size-1;
while (i<=j){
   while(arr[i]==0){
    i++;
   }
   while(arr[j] == 1){
    j--;
   }
   swap(arr[i], arr[j]);
   i++;
   j--;

}
}
int main(){                                    // MAIN FUNCTION
    int arr[8] = {0,1,0,1,0,1,0,1};

    cout<<"input array is : "<<endl;
    print_arr(arr,8);
    sort(arr, 8);
    
    cout<<"array after sorting is "<<endl;
    print_arr(arr,8);
    return 0;

}