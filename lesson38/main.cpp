#include <iostream>
#include <list>

using namespace std;

void display (list<int> lyst) {
    list<int>::iterator iter = lyst.begin ();
    while (iter != lyst.end ()) {
        cout << *iter << endl;
        iter++;
    }
}

void insert_max (list<int> &lyst, int value) {
    lyst.sort ();
    if (value > lyst.back ())
        lyst.push_back (value);
}

int main () {
    list<int> numbers;
    numbers.push_back (0);
    int number;
    for (int count = 0; count <= 10; count++) {
        cout << "Enter a number: ";
        cin >> number;
        insert_max (numbers, number);
    }
    display (numbers);
    return 0;
}