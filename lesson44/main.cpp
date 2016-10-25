#include <iostream>
#include <utility>
#include <map>

using namespace std;


int main () {
    multimap<string, string> numbers;
    numbers.insert (pair<string, string> ("Jones", "123"));
    numbers.insert (pair<string, string> ("Smith", "456"));
    numbers.insert (pair<string, string> ("Brown", "789"));
    numbers.insert (pair<string, string> ("Jones", "012"));
    numbers.insert (pair<string, string> ("Green", "345"));
    numbers.insert (pair<string, string> ("Jones", "678"));
    string search_name = "Jones";
    multimap<string, string>::iterator iter = numbers.find (search_name);
    multimap<string, string>::iterator last = numbers.upper_bound (search_name);

    for (; iter != last; iter++)
        cout << iter->first << ": " << iter->second << endl;
    return 0;
}