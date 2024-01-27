#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    cout << v1.front() << endl // displays 1
    << v1.capacity() << endl   // 16
    << v1.size();              //9
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.shrink_to_fit();
    cout << v1.capacity() << endl;
    cout << v1.size() << endl << endl;

    vector<int> v2 = {5, 6, 7, 8};
    v2.insert(v2.begin(), 20);
    v2.insert(v2.begin(), 30);

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << endl;
    }

    cout << endl;
    v2.insert(v2.begin(),10);
    
    for (auto itr = v2.begin(); itr != v2.end(); ++itr){
        cout << *itr << endl;
    }

    return 0;
}