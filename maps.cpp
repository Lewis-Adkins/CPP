#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    //DEFINE MAP

    map<char,int> mp = {
        {'L', 23},
        {'M',23},
        {'J', 27}
    };

    // INSERT PAIR IN MAP 1
    mp['U'] = 9;
    
    // INSERT PAIR IN MAP 2
    pair<char,int> p1('S', 14);
    mp.insert(p1);
    
    cout << mp['S'] << endl << endl;
    
    //PRINT ELEMENTS OF PAIR
    cout << p1.first << endl
    << p1.second<<endl << endl;

    //ERASE ELEMENT
    mp.erase(p1.first);
    cout << mp['S'] << endl<< endl;

    //mp.clear();
    cout << mp['S'] << endl<< endl;

    //CHECK IF PAIR IS EMPTY
    cout << mp.empty() << endl << endl;

    //GIVES SIZE OF MAP
    cout << mp.size() << endl<< endl;

    //DISPLAY ALL ELEMENTS IN MAP LOOP
    for (map<char,int> :: iterator itr = mp.begin(); itr != mp.end(); itr++){  // Other notation map<char,int> :: iterator itr == auto itr
        cout << (*itr).first << endl << endl; // Other notation (*itr).first == itr -> first
        cout << itr -> second << endl;
    }

    // STRING TEST

    string test = "fdhsajkfhiueqweouytiueowqrncvmbjkfhrzqeotiuqyrifgb";

    map<char, int> freq;
    for (int i = 0; i < test.size(); i++) {
        char letter = test[i];
        
        if (freq.find(letter) == freq.end()) {
            freq[letter] = 0;
        }

        freq[letter]++;
        cout << freq[letter] << "," << letter << endl;
    }

    for (auto itr = freq.begin(); itr != freq.end(); itr ++) {
        cout << itr->first << ":" << itr -> second << endl;
    }

    return 0;

}