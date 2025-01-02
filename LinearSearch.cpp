#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)              // BOOL RETURN FUNCTION (LINEAR SEARCH)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]== key){
            return 1;
        }
    }
    return 0;
}

int main()                                              // MAIN FUNCTION
{
    int array[10] = {-2, 4, 4, 6, 7, 8, 9, 0, -6, 11};
    cout << "enter the element you want to search" << endl;
    int key;
    cin >> key;
    bool found = search(array, 10, key);
    if(found == 1){
        cout<<"number found "<<endl;
    }
    else {
        cout <<"number not found";
    }
    return 0;
}
