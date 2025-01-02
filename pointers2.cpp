#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,9,2,3,4,5,6,7,8,0};
    cout<<"address of first memory blck is -> "<<arr<<endl;
    cout<<"address of first momory block is -> "<<&arr[0]<<endl;
    cout<<"*arr output-> "<<*arr<<endl;
    cout<<"*arr+1 output -> "<<*arr +1<<endl;
    cout<<"*(arr+1) output -> "<<*(arr+1)<<endl;
   

    return 0;


}