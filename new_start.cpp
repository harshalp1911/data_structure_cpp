#include<iostream>
using namespace std;
int main (){
    int fact;
    cout<<"enter number";
    cin>> fact;
int multi = 1;
   for(int i =1; i <=fact; i++){
    multi *=i;
   }
   cout<<multi;
   return 0;
}