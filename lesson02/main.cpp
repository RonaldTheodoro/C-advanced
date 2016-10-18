#include <iostream>
#include <sstream>


using namespace std;


class Employee {
    
    private:
        string name;
        double pay;
    
    public:
        Employee () {
            name = "";
            pay = 0;
        }

        Employee (string emp_name, double pay_rate) {
            name = emp_name;
            pay = pay_rate;
        }

        string get_name () {
            return name;
        }

        void set_name (string emp_name) {
            name = emp_name;
        } 

        double get_pay () {
            return pay;
        }

        void set_name (double pay_rate) {
            pay = pay_rate;
        } 

        string to_string () {
            stringstream stm;
            stm << name << ": " << pay;
            return stm.str ();
        }
};


int main () {
    Employee emp1 ("Jane Smith", 35000);
    Employee emp2 ("Bill Brow", 32000);

    cout << emp1.to_string () << endl;
    cout << emp2.to_string () << endl;
 
    return 0;
}