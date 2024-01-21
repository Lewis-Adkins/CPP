#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<char> s1 = {'L', 'M', 'J', 'L', 'M', 'J', 'Y'};
    s1.insert('C');

    for (auto itr = s1.begin(); itr != s1.end(); itr++){
        cout << *itr << endl;
    }

    s1.erase('C');

    if (s1.find('Y') == s1.end()){
        cout << "Could not find Y" << endl;        
    } else {
        cout << "Found Y!" << endl;
    }

    for (auto itr = s1.begin(); itr != s1.end(); itr++){
        cout << *itr << endl;
    }

    string test = "sdafhaiweuiowerhvliuaowrefhldkuhviuowrthqortyqpiouqhfdsjkgbnvbnfuahpa";
    set<char> exists;

    for (int i = 0; i < test.length(); i++){
        char letter = test[i];
        exists.insert(letter);
    }

    for (auto itr = exists.begin(); itr != exists.end(); itr++) {
        cout << *itr << endl;
    }

    string find = "hello";
    set<char> findLetters;

    for (int i = 0; i< find.length(); i++) {
        char letter = find[i];
        findLetters.insert(letter);
    }

    for (int i = 0; i < test.length(); i++){
        char letter = test[i];
        findLetters.erase(letter);
    }

    if (findLetters.size() > 0) {
        cout << "No not all letters";
    } else {
        cout << "Yes it does have all letters";
    }

    return 0;
}
