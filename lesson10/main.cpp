/* derived example */

#include <iostream>
#include <string>
#include <sstream>


using namespace std;


class Employee {
    // Base class

    protected:
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

        double gross_pay (int hours) {
            return pay * hours;
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

        double gross_pay (int hours) {
            if (this->salaried)
                return pay;
            return pay * hours;
        }

        string to_string () {
            stringstream stm;
            string salary;

            if (this->salaried)
                salary = "Salaried";
            else
                salary = "hourly";

            stm << name << ": " << pay << " " << salary;
            return stm.str ();
        }
};

int main () {
    Employee emp1 ("Mary Smith", 15.00);
    Employee *emp = &emp1;
    cout << "Employee name: " << emp->get_name () << endl;
    cout << "Employee pay: " << emp->get_pay () << endl;
    cout << "Employee gross pay: " << emp->gross_pay (40) << endl;

    Manager man1 ("Bob Brow", 15, true);
    emp = &man1;
    cout << emp->to_string () << endl;
    cout << "emp2's gross pay: " << emp->gross_pay (40) << endl;
    return 0;
}