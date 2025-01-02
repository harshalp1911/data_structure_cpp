// LECTURE 10 HW QUESTION

#include <iostream>
using namespace std;
void sum(int arr[], int size){                         // SUM OF ELEMENT FUNCTION
    int sum=0;
    
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout<<"sum of an element of an array is : "<<sum;
}
int main ()                                         // MAIN FUNCTION
{
    int size;
    int arr[100];
    cout<<"enter size of the array :"<<endl;
    cin>>size;
    cout<<"enter elements in array :"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    sum(arr, size);
    //cout<<"sum of an element of an array is : "<<sum;
}