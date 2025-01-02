#include <iostream>
using namespace std;

void countPrime(int arr[], int n){

    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    int count =0;
    prime[0] = prime [1] = false;


    for(int i =2; i <= n ; i++){
        if(prime[i]){
            count ++;

            for(int j = 2*i; j <=n; j+=i){
                prime[j] = false;

            }
        }
    
    }
    // print  the elements
    for (int i = 2; i <= n ; i++){
        if(prime[i]){
            cout<< i << " ";
        }
    
    }
}


int main (){
    int arr [11] = {0,1,2,3,4,5,6,7,8,9,11};
    countPrime(arr, 11);
    return 0;
}