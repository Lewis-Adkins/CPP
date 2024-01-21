#include <iostream>
#include <string>
using namespace std;

void print(string text) {
    cout << text << endl;
}

void printNTimes(int n, string text) {
    for (int i = 0; i<n; i++) {
        print(text);
    }
}

int add(int x, int y) {
     return x + y;
}

int getNumber() {
    return 6;
}   

int doMath(int x, int y, int z = 1) {
    return (x+y) * z;
}

pair <int, int> makePair(int x, int y) {
    return pair<int,int>(x,y);
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {

    int result1 = add(2, 3);
    int result2 = getNumber();
    
    cout << result1 << endl;
    cout << result2 <<endl << endl;

    printNTimes(5, "Dewey");
    printNTimes(7, "Gulli");
    cout << endl;
    cout << doMath(1,2) << endl << endl;
    cout << makePair(2,3).first << endl;

    int a = 2;
    int b = 4;

    cout << a << endl
     << b << endl;
     cout << "Swapping" << endl;
     swap(a,b);
     cout << a << endl
     << b << endl;

    return 0;

}