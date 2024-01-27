#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    tuple <int, string> person(7, "Koda");
    cout << get<0>(person) << endl
    << get<1>(person) << endl;
    get<1>(person) = "Ollie \n";
    cout << get<1>(person) << endl;

    tuple <int, char, bool, float> thing;
    thing = make_tuple(392, 'L', true, 284.234);
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl << endl;

    tuple <int, int> t1 = make_tuple(1,2);
    tuple <int, int> t2 = make_tuple(3,4);
    t1.swap(t2); // swap function must have same size of tuple
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl << endl;

    tuple <int, int> t3 = make_tuple(1,2);
    int x,y;
    tie(x,y) = t3;
    cout << x << endl;
    cout << y << endl;
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl << endl;

    tuple <int, char> t4(20,'L');
    tuple <char, string> t5('R', "DIlly");
    auto t6 = tuple_cat(t4, t5);             //Use auto to infer types of elements
    cout << get<0>(t6) << endl;
    cout << get<1>(t6) << endl;
    cout << get<2>(t6) << endl;
    cout << get<3>(t6) << endl;


    return 0;
}