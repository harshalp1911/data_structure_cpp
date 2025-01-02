#include<iostream>
#include<vector>
using namespace std;

int minOpr(const vector<int>&a, int n ){
    bool all = true;
    for(int i =1; i < n; i ++){
        if(a[i] != a[0]){
            all = false;
            break;
        }
    }
    if(all) return 0;


    bool increase = true;
    for(int i =1; i < n; i++){
        if(a[i] > a[i-1]){
            increase = false;
            break;
        }
    }
    if(increase) return 1;

    return 2;


}

int main (){
    int t ;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;

        vector <int> a(n);
        for(int i =0; i < n ; i++){
            cin >> a[i];
        }

        cout << minOpr(a,n)<< endl;
    }
    return 0;

}