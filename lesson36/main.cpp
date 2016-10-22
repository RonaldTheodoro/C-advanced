#include <iostream>
#include <deque>

using namespace std;

int main () {
    deque<string> line;

    line.push_back ("customer 1");
    line.push_front ("customer 2");
    line.push_back ("customer 3");

    for (int count = 0; count < line.size (); count++)
        cout << line[count] << endl;

    line.pop_back ();
    line.pop_front ();
    
    cout << "After remove elements" << endl;
    for (int count = 0; count < line.size (); count++)
        cout << line[count] << endl;

    cout << "Size of line: " << line.size () << endl;
    return 0;
}