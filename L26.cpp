#include<iostream>
using namespace std;
int main (){
    int temp[10];
    cout<<"sizeof(temp) -> "<< sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<"size of *ptr -> "<<sizeof(ptr)<<endl;
    cout<<"ptr ->"<<ptr<<endl;
    cout<<"temp -> "<<temp;
    cout <<endl;
    cout<<endl;
    char ch[8] = "harshal";
    cout<<"cout ch -> "<<ch<<endl;
    cout<<"cout temp ->"<<temp<<endl;





    return 0;
}