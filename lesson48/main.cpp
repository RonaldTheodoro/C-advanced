#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename TYPE>
void display(vector<TYPE> v) {
    for (int count = 0; count < v.size (); count++)
        cout << v[count] << " ";
    cout << endl;
}

int main () {
    vector<int> numbers;
    for (int count = 1; count < 10; count++)
        numbers.push_back (count);

    display (numbers);

    replace (numbers.begin (), numbers.end (), 4, 10);
    display (numbers);

    fill (numbers.begin (), numbers.end (), 10);
    display (numbers);

    vector<string> names;
    names.push_back ("Jennifer");
    names.push_back ("Raymond");
    names.push_back ("David");
    names.push_back ("Anna");
    names.push_back ("Cris");
    names.push_back ("Smith");
    names.push_back ("Anderson");
    display (names);

    replace (names.begin (), names.end (), "Cris", "Mark");
    display (names);

    fill (names.begin (), names.end (), string("_"));
    display (names);
    return 0;
}