#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main () {
    ifstream grade_file;
    stringstream grades;
    int grade, total = 0;
    grade_file.open ("grades.txt");
    string line;
    getline (grade_file, line);
    grades << line;
    grade_file.close ();

    for (int count = 0; count < 5; count++) {
        grades >> grade;
        total += grade;
    }
    double average = total / 5;
    cout << "Average: " << average << endl;
    return 0;
}