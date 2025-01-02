#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"inside the update function "<<endl;
    arr[0] = 120;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {                    // MAIN FUNCTION
    int arr[3] = {3,4,6};
  // int n;
   //cout<<"enter size of an array "<<endl;
  // cin>>n;
   
  update(arr, 3);
  cout<<"print in main function "<<endl;
  for(int i=0; i< 3; i++){
      cout<<arr[i]<<" ";
  }
    return 0;
}