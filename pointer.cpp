#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 2;
    int *y = &x;
    cout << x << endl;
    cout << y << endl << endl;

    cout << &x << endl;
    cout << *y << endl << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *head = arr;
    int lenarr = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < lenarr; i++) { 
        head  = arr + i;
        cout << head << endl; 
    }

    cout << endl;


    for (int i = 0; i < lenarr; i++) { 
        head  = arr + i;
        cout << *head << endl; 
    }
}