#include <iostream>

using namespace std;

const int divide_by_zero = 1;

int main () {
    int numer = 12, denom = 0;

    try {
        if (denom == 0)
            throw divide_by_zero;
        else
            cout << numer / denom;
    } catch (int err) {
        if (err == divide_by_zero)
            cout << "Error: division by zero" << endl;
    } 
    return 0;
}