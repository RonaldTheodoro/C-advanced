#include <iostream>

using namespace std;

template <typename T, typename U>
T max (T arg1, U arg2) {
    return (arg1 > arg2) ? arg1 : arg2;
}


int main () {
    cout << "Max value is: " << max (35.55, 13) << endl;
    return 0;
}