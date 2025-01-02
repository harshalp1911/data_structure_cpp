#include <iostream>
#include <math.h>
using namespace std;

int setBit(int n) // function to get bit of decimal number
{
    int bit;
    int ans = 0;
     int i = 0;

    while (n != 0)
    {
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}
int add_bit(int n) // get the decimal digit 
{
    int sum =0;
    int num = setBit(n);
    while (num != 0){

    int digit = num %10;
    if (digit == 1)
    {
        sum = sum + digit;
    }
    num = num /10;
    } 
    return sum;
    return num;
}

int main()
{
    int a, b;
    int answer;
    cout << "enter A and B ";
    cin >> a >> b;
    answer = add_bit(a) + add_bit(b);
    cout << "addition of set bit of two number is " << answer;
   
    return 0;
}