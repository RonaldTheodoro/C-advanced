#include <iostream>
#include <sstream>

using namespace std;


class Person {
    
    private:
        string first, middle, last;
        int age;

    public:
        Person (string first, string middle, string last, int age) {
            this->first = first;
            this->middle = middle;
            this->last = last;
            this->age = age;
        }

        string to_string () {
            stringstream stm;
            stm << first << " " << middle << " " << last << " " << age;
            return stm.str ();
        }
};



int main () {
    string first = "Ronald", middle = "Theodoro", last = "Nascimento";

    Person person (first, middle, last, 23);
    cout << person.to_string () << endl;
    return 0;
}