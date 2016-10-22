#include <iostream>
#include <list>

using namespace std;


void display (list<string> lyst) {
    list<string>:: iterator iter = lyst.begin ();
    while (iter != lyst.end ()) {
        cout << *iter << endl;
        iter++;
    }
}

int main () {
    list<string> names;
    names.push_back ("Mary");
    names.push_back ("Zach");
    names.push_back ("Elizabeth");
    
    cout << "First name: " << names.front () << endl;
    cout << "Last name: " << names.back () << endl;
    cout << endl;
    
    cout << "Normal order" << endl;
    display (names);
    cout << endl;
    
    cout << "Reverse order" << endl;
    names.reverse ();
    display (names);
    cout << endl;
    
    cout << "Sort order" << endl;
    names.sort ();
    display (names);
    cout << endl;

    cout << "After add a new element" << endl;
    names.push_front ("Barry");
    display (names);
    cout << endl;

    cout << "After remove a element" << endl;
    names.remove ("Elizabeth");
    display (names);
    cout << endl;

    cout << "Pop front" << endl;
    names.pop_front ();
    display (names);
    cout << endl;

    cout << "Pop back" << endl;
    names.pop_back ();
    display (names);
    cout << endl;

    cout << "Clear" << endl;
    names.clear ();
    display (names);
    cout << endl;
    
    if (names.empty ())
        cout << "list empty" << endl;
    else
        cout << "list not empty" << endl;
    
    
    cout << "Size of list: " << names.size () << endl;
    return 0;
}