// NOT WORKING PROGRAM

#include<iostream>
#include <math.h>
using namespace std;
int main ()
{int new_ans;
  int n;
  int ans=0;
  cout<<"enter Number :";
  cin>>n;

  while (n!=0){
    int bit = n &1;                         // check whether is 0 or 1
    int i=0;
    ans= ((bit* pow(10,i)) + ans);            // converted to binary
    n = n>>1;
    i++;

    if(n<0)
    {
        int new_ans = (~ans);              // 1's complement 
        new_ans +=1;                        // 2's complement
      //  cout<<new_ans<<endl;

    }
  }
  cout<<new_ans<<endl;
  //return(new_ans);
  
}