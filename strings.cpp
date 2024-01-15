#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Scoogley Moogely";
    int length;
    cout << str[1] << endl;
    str[1] = 'k';
    cout << str[1] << endl;

    length = sizeof(str) / sizeof(str[0]); //Apperently you can use str.size() or str.length()
    cout << length<< endl;

    for (int i = 0; i < str.size(); i++){
        cout<< str[i];
    }
    return 0;
}