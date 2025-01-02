#include <iostream>
#include<vector>
using namespace std;

vector <int> reverse(vector<int>v){             // REVERSE VECTOR FUNCTION
    int s =0;
    int e = v.size() -1;
    while (s<= e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printArr(vector<int>v){                    // PRINTING ARRAY FUNCTION
    for(int i =0; i <v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main (){                                    // MAIN FUNCTION
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout<<"element before reversing"<<endl;
    printArr(v);
    vector<int> ans = reverse(v);
    cout<<"element after reversing"<<endl;
    printArr(ans);


   
    return 0;
}