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

        double gross_pay () {
            return this->pay;
        }
};

int main () {
    vector<Employee> emps;

    Employee emp ("Mary Smith", 15.00);
    emps.push_back (emp);

    Manager man ("Bob Brow", 1500, true);
    emps.push_back (man);

    for (int cont = 0; cont < emps.size(); cont++)
        cout << emps[cont].gross_pay(10) << endl;

    return 0;
}