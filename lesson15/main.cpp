#include <iostream>
#include <string>


using namespace std;


void display (int arr[], int size) {
    for (int cont = 0; cont < size; cont++)
        cout << arr[cont] << " ";
    
    cout << endl;
}

void display (string arr[], int size) {
    for (int cont = 0; cont < size; cont++)
        cout << arr[cont] << " ";
    
    cout << endl;
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
    return 0;
}
