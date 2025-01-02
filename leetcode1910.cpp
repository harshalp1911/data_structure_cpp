#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;

string occ(string s, string part){
    string temp = "";

    while(s.length() != 0 && s.find(part) < s.length()){
        temp =  s.erase(s.find(part), part.length());
        cout<<"step by step removal  "  << temp<< endl;
    }
    return temp;
}


int main (){

    string s = "daabcbaabcbc";
    string part = "abc";

    cout<<"string before filter " << s<< endl;


    string ans = occ(s, part);
    cout<<"string after filter "<<  ans <<endl;

    return 0;


}