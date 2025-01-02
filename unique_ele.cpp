#include <iostream>
using namespace std;
int unique(int arr[], int size){
    int ans = 0;
    for(int i =0; i < size ; i++){
        ans = ans^ arr[i];
       
    }
     return ans;
}
int main ()
{
    int arr[5] = {9,3,4,3,4};
    cout<<"unique element in array is "<<endl;
    cout<< unique(arr,5)<<endl;
    return 0;
}