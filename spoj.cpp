#include<iostream>
using namespace std;
const int N = 1e6+10;
int n ;
long long m;
long long trees[N];
bool isSufficient(int h){
    long long wood =0;
    for(int i =0; i < n; i++){
        if(trees[i] >= h){
            wood += (trees[i]-h);
        }
    }
    return wood >=m;
}
int main (){
    cin>>n>>m;
    for(int i =0; i<n ;i++){
        cin>> trees[i];
    }
    long long low =0, high = 1e9, mid;
    while(low < high){
        mid = low + (high - low)/2;
        if(isSufficient(mid)){
            low = mid;
        }
        else{
            high = mid -1;
        }
    }
    if(isSufficient(high)){
        cout<<high<<endl;
    }
    else{
        cout<<low<<endl;
    }

}