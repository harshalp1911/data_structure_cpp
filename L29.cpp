// very very important concept //
#include<iostream>
using namespace std;
int main (){
    
    int row;
    cout<<"enter row ->"<<endl;
    cin>>row;
    int col;
     cout<<"enter col ->"<<endl;
    cin>>col;
    int **arr = new int*[row];

    // CREATING DYNAMIC 2D ARRAYS
    for(int i =0; i<row; i++){ 
        arr[i] = new int[col];
    }


    // take values
    for(int i =0; i< row ; i++){
        for(int j =0; j<col ; j++){
            cin>> arr[i][j];
        } 
        
    }
    // printing array
    cout<<"2d array is ->"<<endl;
     for(int i =0; i< row ; i++){
        for(int j =0; j<col ; j++){
            cout <<  arr[i][j]<<" ";
        }cout<<endl;  
    }
    // clear the memory
    for(int i =0; i< row; i++){
        delete [] arr[i];
    }
    delete []arr;
    cout<<"memory cleared"<<endl;

    return 0;
} 









// crating 2d array
int **arr = new int*[row];
for(int i =0; i < row; i++){
    arr[i] = new int [col];
}

for(int i = 0; i <row; i++){
    for(int j =0; j <col; j++){
        cin>>arr[i][j];
    }
}

// print

for(int i=0; i < row; i++){
    for(int j =0; j < col; j++){
        
    }
}
