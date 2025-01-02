#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
// #include<s>
using namespace std;

// Function to check character is valid or not
bool valid(char ch){
    if((ch >= 'a'  && ch <= 'z') || (ch >= 'A' && ch<= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    else 
    return false;
}


// function to check string is pallindrome or not
bool check_pallindrome(string a){
    int s = 0;
    int e = a.length() -1;
    while(s<=e){
        if(a[s] != a[e]){
            return false;
        }
        else {
            e--;
            s++;
        }

    }
    return true;

}
// function to check given string after removing invalid character is pallindrome or not
bool is_pallindrom(string a){
    string temp ="";
    for(int i = 0; i <a.length(); i++){
        if(valid(a[i])){
            temp.push_back(a[i]);
        }
    }

    for(int i =0; i < a.length(); i++){
        temp[i] = tolower(temp[i]);
    }
    return check_pallindrome(temp);
}


int main (){
    string s;
    cout<<"enter string: ";
    cin>> s;

    cout<< is_pallindrom(s)<<endl;
    
    return 0;
}