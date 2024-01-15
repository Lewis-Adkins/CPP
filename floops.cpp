#include <iostream>
#include <string>

using namespace std;

int main(){
    
    for (int i = 0; i < 10; i++){
        cout << "Hello Brangus!\n";
        if (i % 2 == 0) {
            cout << "Goodbye Jones! \n";
        }
    }
}