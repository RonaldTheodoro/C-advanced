#include <iostream>

using namespace std;


template <typename T>
bool equals (T value1, T value2) {
    return (value1 == value2) ? true : false;
}


int main () {
    string x = "Ronald", y = "Ronald";
    cout << equals (x, y) << endl;
    return 0;
}