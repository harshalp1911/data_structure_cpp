#include <iostream>
using namespace std;
char getMaxOcc(string s){
    int arr[26]= {0};
    // create an array of count
    for(int i =0; i < s.length(); i++){
        char ch = s[i];
        int num =0;
        num = ch - 'a';
        arr[num]++;
    }
    //get the maximum of counts
    int maxi=-1;
    int ans = 0;
    for(int i =0; i<26; i++){
        if(maxi< arr[i]){
            ans = i;
            maxi = arr[i];
        }       
    }
    char final_ans = 'a' + ans;
    return final_ans;
}

int main()
{
    string s;
    cin >> s;
    cout<<"character with max  frequency: "<<endl;
    cout<< getMaxOcc(s);

    return 0;
}