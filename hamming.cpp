#include <iostream>
using namespace std;

int hamming_bit(int num){
    int count = 0;
    int bit;
    while (num != 0){
        bit = num & 1;
        if (bit){
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int main(){
    int num;
    cout << "enter number. " << endl;
    cin >> num;
    cout << hamming_bit(num)<<endl;

    return 0;
}