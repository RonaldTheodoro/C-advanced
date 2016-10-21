#include <iostream>

using namespace std;

int main () {
    /*
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Name: " << name << endl;
    */
    char c = cin.get ();

    do {
        cout.put (c);
        c = cin.get ();
    } while (!cin.eof ());
    return 0;
}