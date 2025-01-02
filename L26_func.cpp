#include<iostream>
using namespace std;

void print(int *p){
    cout<<&p<<endl;
    cout<<p<<endl;
}
int getSum(int *arr, int n){

    cout<<"sizeof ->"<<sizeof(arr)<<endl;
    int sum =0;

    for(int i =0; i<n ; i++){
        sum+=arr[i];
    }
    return sum;
}

int main (){
    int value =5;
    int *ptr = &value;
    print(ptr);

    int arr[5] = {1,2,3,4,5};
      // arr passed as a pointers 
    cout<<"sum of array is ->"<<getSum(arr, 5)<<endl;

    return 0;
}