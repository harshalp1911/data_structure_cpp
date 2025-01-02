#include<iostream>
using namespace std;
int getSum(int arr [], int n ){
    int sum =0;
    for(int i =0; i < n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main (){

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int result= getSum(arr, 5);
    cout<<result;
    int num = 5;
    cout<<" num -> "<<num<<endl;
    cout<<"address of num is : "<< &num<<endl;
    
    // int *ptr = &num;
    // cout<<"value at pointer ptr is *ptr :"<< *ptr<<endl;
    // cout<<"address at pointer located is ptr :"<<ptr<<endl;
    // cout<<"ptr ka address  " <<&ptr<<endl;

    // int *ptr2 = ptr;
    // (*ptr2)++;
    // cout<<*ptr2<<endl;
    // cout<<num<<endl;
    // // int first =8;
    // // int *p = &first;
    // // cout<<(*p)++<<" "<< first<<endl;
    
    return 0;
}