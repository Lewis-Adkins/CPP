#include <iostream>
#include <string>
using namespace std;

int main() {
    bool x1 = !false;          // True
    bool x2 = !true;           // False 

    bool y1 = true && true;    // True
    bool y2 = true && false;   // False
    bool y3 = false && false;  // False

    bool z1 = true || false;   // True
    bool z2 = false || false;  // False
    bool z3 = true || true;    // True

    return 0;
}