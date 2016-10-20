#include <iostream>

using namespace std;


template <typename T>
class Stack {

    private:
        T datastore[100];
        int top;
        int SIZE;

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

int main () {
    Stack<int> numbers;

    numbers.push (12);
    numbers.push (22);
    numbers.push (32);
    numbers.push (42);
    numbers.push (52);

    cout << numbers.peek () << endl;
    int value = numbers.pop ();
    cout << numbers.peek () << endl;
    return 0;
}