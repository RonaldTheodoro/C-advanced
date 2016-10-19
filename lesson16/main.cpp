#include <iostream>
#include <string>


using namespace std;

template <typename T>
void display (T arr[], int size) {
    for (int cont = 0; cont < size; cont++)
        cout << arr[cont] << " ";
    
    cout << endl;
}

template <typename T>
T max (T &arg1, T &arg2) {
    return (arg1 > arg2) ? arg1 : arg2;
}

int main () {
    const int SIZE = 10;
    int numbers[SIZE];

    for (int cont = 0; cont < SIZE; cont++)
        numbers[cont] = cont + 1;

    display (numbers, SIZE);
    string names[] = {
        "Jim",
        "Fred",
        "Jane",
        "Bob",
        "Mary",
        "Mike",
        "Terri",
        "Allison",
        "Mason",
        "Meredith",
    };
    display (names, SIZE);

    cout << max (12, 24) << endl;
    cout << max (2.25, .25) << endl;
    string s1 = "apple", s2 = "aardvark";
    cout << max (s1, s2) << endl;
    return 0;
}
