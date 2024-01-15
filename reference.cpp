#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 2;  // --->[4]
    int &b = a; // ----^
    a = 4;
    cout << a << endl;
    cout << b << endl;
    cout << &a << endl; // Address
    cout << &b << endl;
    return 0;
}