#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename TYPE>
void display (vector<TYPE> v) {
    for (int count = 0; count < v.size (); count++)
        cout << v[count] << " ";
    cout << endl;
}

int main () {
    auto const size_numbers = 10;
    int numbers[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    
    vector<int> nums(numbers, numbers + size_numbers);
    display (nums);

    sort (begin (nums), end (nums));
    display (nums);

    const int size_words = 16;
    string words[] = {"now", "is", "the", "time", "for", "all", "good",
                      "people", "to", "come", "to", "the", "aid", "of", 
                      "their", "party"};

    vector<string> sentence (words, words + size_words);
    display (sentence);

    sort (begin (sentence), end (sentence));
    display (sentence);
    return 0;
}