/* derived example */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>


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

        virtual double gross_pay (int hours) {
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

        virtual double gross_pay (int hours) {
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
    Employee emp ("Mary Smith", 15.00);
    Manager man ("Bob Brow", 15, true);
    
    vector<Employee*> employees;
    employees.push_back (&emp);
    employees.push_back (&man);

    for (int count = 0; count < employees.size (); count++) {
        cout << "Name: " << employees[count]->get_name () << endl;
        cout << "Pay: " << employees[count]->gross_pay (40) << endl;
    }
    return 0;
}