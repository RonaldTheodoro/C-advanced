#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> numbers(10);

    for (int count = 0; count < 11; count++)
        numbers.push_back (count);

    int sum = 0;
    for (int count = 0; count < numbers.size (); count++)
        sum += numbers[count];

    cout << sum << endl;
    return 0;
}