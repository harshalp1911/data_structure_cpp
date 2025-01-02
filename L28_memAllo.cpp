#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;

}
int main (){
    int n ;
    cout<<"enter N ->"<<endl;
    cin>>n;
    //variable size ka array created
    int *arr = new int[n];

    //array mein input
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    int ans = getSum(arr, n);
    cout<<"sum of element is -> "<<ans<<endl;

    return 0;
}