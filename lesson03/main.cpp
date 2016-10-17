/* derived example */

#include <iostream>
#include <string>
#include <sstream>


using namespace std;


class Employee {
    // Base class

    private:
        string name;
        double pay;
    
    public:
        Employee () {
            name = "";
            pay = 0;
        }

        Employee (string name, double pay) {
            this->name = name;
            this->pay = pay;
        }

        string get_name () {
            return this->name;
        }

        void set_name (string name) {
            this->name = name;
        } 

        double get_pay () {
            return this->pay;
        }

        void set_name (double pay) {
            this->pay = pay;
        } 

        string to_string () {
            stringstream stm;
            stm << name << ": " << pay;
            return stm.str ();
        }
};


class Manager : public Employee {

    private:
        bool salaried;

    public:
        Manager (string name, double pay, bool salaried) 
            : Employee (name, pay) {
                this->salaried = salaried;
            }

        bool get_salaried () {
            return this->salaried;
        }

        void set_salaried (bool salaried) {
            this->salaried = salaried;
        }
};

int main () {
    Employee emp1 ("Mary Smith", 15.00);
    cout << "Employee name: " << emp1.get_name () << endl;
    cout << "Employee pay: " << emp1.get_pay () << endl;

    Manager emp2 ("Bob Brow", 1500, true);
    cout << "Manager name: " << emp2.get_name () << endl;
    cout << "Manager pay: " << emp2.get_pay () << endl;
    cout << "Manager is salaried?: " << emp2.get_salaried () << endl;
 
    return 0;
}