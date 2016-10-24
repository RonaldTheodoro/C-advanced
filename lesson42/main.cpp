#include <iostream>
#include <map>

using namespace std;

int main () {
    map<string, int> grades;
    grades["Jones"] = 78;
    grades["Smith"] = 83;
    grades["Green"] = 92;
    string name;
    cout << "Enter a name to find: ";
    cin >> name;
    if (grades.find (name) != grades.end ())
        cout << name << ": " << grades[name] << endl;
    else
        cout << name << " not find" << endl;

    int sum = 0;
    double average = 0.0;

    map<string, int>::iterator iter = grades.begin ();
    while (iter != grades.end ()) {
        cout << iter->second << endl;
        sum += iter->second;
        ++iter;
    }
    cout << endl;
    average = sum / grades.size ();
    cout << "The average grade is: " << average << endl;
    return 0;
}