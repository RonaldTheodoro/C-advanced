#include <iostream>
#include <utility>

using namespace std;

int main () {
    pair<string, string> dict("key", "value");
    cout << dict.first << ": " << dict.second << endl;

    pair<string, int> student("Brow", 80);
    cout << student.first << ": " << student.second << endl;
    return 0;
}