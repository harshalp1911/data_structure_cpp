#include<iostream>
using namespace std;

 void Rsum(int arr[][4], int i, int j){
        int sum =0;
        for(int i =0; i< 3; i++){
            for(int j =0; j<4; j++){
                sum+=arr[i][j];
            }
            cout<<sum<<endl;
            sum =0;
        }
    }
    
int largestRowSum(int arr [][4], int i , int j ){
    int maxi = INT_MIN;
     int sum =0;
        for(int i =0; i< 3; i++){
            for(int j =0; j<4; j++){
                sum+=arr[i][j];
            }
           maxi = max(maxi,sum);
           int rowNumber = i;   
        }

}

int main (){
   

    int arr[3][4];
    cout<<"enter elemen in array"<<endl;
    for(int i =0; i< 3; i++){
        for(int j =0; j<4; j++){
            cin>>arr[i][j];
        }
    }


    cout<<"array u have entered arer"<<endl;
    for(int i =0; i< 3; i++){
        for(int j =0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"row wise sum"<<endl;
    Rsum(arr, 3,4);

    cout<<"largest row sum : "<< largestRowSum(arr,3,4)<<endl;


    return 0;
}