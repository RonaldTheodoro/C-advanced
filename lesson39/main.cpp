#include <iostream>
#include <deque>
#include <fstream>
#include <string>

using namespace std;


ifstream open_file (string path) {
    ifstream file;
    file.open (path);
    return file;
}


int main () {
    deque<string> names;
    ifstream name_list = open_file ("names.txt");
    
    string line;
    while (!name_list.eof ()) {
        getline (name_list, line);
        string::iterator iter = line.end ();
        --iter;
        size_t pos = line.find(" ");
        string name = line.substr (0, pos);

        if (*iter == 'p')
            names.push_front (name);
        else
            names.push_back (name);
    }
    deque<string>::iterator iter = names.begin ();
    while (iter != names.end ()) {
        cout << *iter << endl;
        ++iter;
    }
    name_list.close ();
    return 0;
}