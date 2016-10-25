#include <iostream>
#include <map>
#include <fstream>

using namespace std;

string get_name (string line) {
    return line.substr (0, line.find (","));
}

string get_number (string line) {
    return line.substr (line.find (",") + 1);
}

void show_menu () {
    cout << "1) Get number" << endl;
    cout << "0) Quit" << endl;
    cout << endl;
    cout << ">>> ";
}

void show_number (map<string, string> phonelist) {
    string name;
    cout << "Enter a name: ";
    cin >> name;
    cout << endl;
    cout << "The number is: " << phonelist[name] << endl;
}

int main () {
    map<string, string> phonelist;
    ifstream file ("phonelist.data");
    string line, name, number;

    while (!file.eof ()) {
        getline (file, line);
        name = get_name (line);
        number = get_number (line);
        phonelist[name] = number;
    }
    file.close ();

    char choice;
    while (1) {
        system ("clear");
        show_menu ();
        cin >> choice;
        
        if (choice == '1')
            show_number (phonelist);
        
        else if (choice == '0')
            break;
    }
    cout << "Hello, world!" << endl;
    return 0;
}