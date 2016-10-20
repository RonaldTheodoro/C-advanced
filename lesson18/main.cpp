#include <iostream>

using namespace std;


template <typename T>
class Stack {

    private:
        T datastore[100];
        int top;

        bool __empty__() {
            return (this->top == -1) ? true : false;
        }

        bool __full__() {
            return (this->top == 100) ? true : false;
        }

    public:
        Stack () {
            top = -1;
        }

        void push (T num) {
            if (!__full__()) {
                ++top;
                datastore[top] = num;
            }
        }

        T pop () {
            if (!__empty__()) {
                T val = datastore[top];
                datastore[top] = 0;
                --top;
                return val;
            }
        }

        T peek () {
            return (!__empty__()) ? datastore[top] : 0;
        }
};


template<>
class Stack<string> {

    private:
        string datastore[100];
        int top;

        bool __empty__() {
            return (this->top == -1) ? true : false;
        }

        bool __full__() {
            return (this->top == 100) ? true : false;
        }

    public:
        Stack () {
            top = -1;
        }

        void push (string val) {
            if (!__full__()) {
                ++top;
                datastore[top] = val;
            }
        }

        string pop () {
            if (!__empty__()) {
                string val = datastore[top];
                datastore[top] = "";
                --top;
                return val;
            }
        }

        string peek () {
            return (!__empty__()) ? datastore[top] : 0;
        }
};

int main () {
    Stack<string> names;

    names.push ("Jim");
    names.push ("Fred");
    names.push ("Jane");
    names.push ("Bob");
    names.push ("Mary");
    names.push ("Mike");
    names.push ("Terri");
    names.push ("Allison");
    names.push ("Mason");
    names.push ("Meredith");

    cout << names.peek () << endl;
    string value = names.pop ();
    cout << names.peek () << endl;
    return 0;
}

