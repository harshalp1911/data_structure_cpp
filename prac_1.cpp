// SCOPES IN ARRAY

#include <iostream>
using namespace std;
void update (int arr[], int n){
    cout<<"inside the funtion "<<endl;
    arr[0] = 120;
    for(int i = 0;i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    int arr[3] = {5,6,7};
    update(arr,3);
    cout<<"print in the MAIN fun "<<endl;
    for(int i =0; i< 3; i++){
        cout<<arr[i]<<" ";
    }

  return 0;
}