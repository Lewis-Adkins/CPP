#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    double result;
    const double pi = 3.141592653;
    bool check;

    for (int i = 0; i < 100; i++) {
        result = sin(i * pi / 8 + pi / 4) + cos(i * pi / 6 + pi / 2);

        if (result > 0) {
            check = true;
        } else {
            check = false;
        }

        while (!check) {
            cout << "- \n";
            break;
        }  

        while (check) {
            cout << "+ \n";
            break;
        }  
    }

    return 0;
}