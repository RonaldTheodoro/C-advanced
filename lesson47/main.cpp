#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main () {
    vector<int> numbers;
    for (int count = 1; count < 10; count++)
        numbers.push_back (count);

    int sum = accumulate (numbers.begin (), numbers.end (), 0);
    cout << "Sum: " << sum << endl;

    vector<string> words;
    words.push_back("Ronald");
    words.push_back(" ");
    words.push_back("The");

    string name = accumulate (words.begin (), words.end (), string(""));
    cout << "Name: " << name << endl;
    return 0;
}