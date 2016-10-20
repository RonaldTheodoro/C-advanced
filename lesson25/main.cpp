#include <iostream>
#include <stdexcept>

using namespace std;

class DivideByZero : public runtime_error {
    
    public:
        DivideByZero () : runtime_error ("Divide by zero exception") { }
};


double quotient (double numer, double denom) {
    if (denom == 0)
        throw DivideByZero ();
    else
        return numer / denom;
}


int main () {

    double numer, denom, ration;

    cout << "Enter a numerator: ";
    cin >> numer;
    cout << "Enter a denominator: ";
    cin >> denom;

    try {
        ration = quotient (numer, denom);
        cout << "Result is: " << ration << endl;
    } catch (...) {
        cout << "Exception throw and caught" << endl;
    }
    return 0;
}