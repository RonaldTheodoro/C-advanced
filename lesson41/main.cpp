#include <iostream>
#include <map>

using namespace std;

int main () {
    map<string, string> numbers;
    numbers["Jones"] = "123";
    numbers["Smith"] = "456";
    numbers["Brown"] = "789";
    string name = "Jones";
    cout << name << ": " << numbers[name] << endl;
    numbers.erase (name);
    cout << "Number of numbers: " << numbers.size () << endl;
    return 0;
}