#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    cin >> x;

    if (x == 7 || x == 8) {
        cout << "Bogus \n";

        } else if (x < 7){
            cout << "Fogo \n";

        } else {
            cout << "Dogo \n";
            
        }
    return 0;
}
