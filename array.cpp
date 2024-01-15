#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 5;
    int arr[x] = {1,2,3,4,5}; // x not needed or equal sign
    cout << arr[4] << endl;
    arr[4] = 10;
    cout << arr[4] <<endl << endl;

    string arr2[] {"Dewey", "Mathu", "Jaju"};
    float arr3[] {1.1,2.2,-3.3};

    
    cout <<"Size of array(bytes)\n" 
         <<sizeof(arr) <<endl<<endl
         <<"Size of element in arry (bytes) \n"
         << sizeof(arr[0])<<endl << endl
         <<"Length of Array \n"
         <<sizeof(arr) / sizeof(arr[0]) <<endl<<endl; //use arr.size() or arr.length()

    return 0;
    
    } 
