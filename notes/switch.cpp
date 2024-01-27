#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 9;
    switch (x+1) {
        case 1:
            cout << "Booly";
            break;
        case 2:
            cout << "Gooly";
            break;
        default:
            cout << "Baba";
                break;
    }

    return 0;
}
