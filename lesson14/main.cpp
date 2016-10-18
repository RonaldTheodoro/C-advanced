#include <iostream>


using namespace std;


class Animal {
    
    public:
        virtual void talk () = 0;
};


class Dog : public Animal {
    
    public:
        virtual void talk () {
            cout << "Bow wow!" << endl; 
        }
};


class Cat : public Animal {
    
    public:
        virtual void talk () {
            cout << "Meow!" << endl; 
        }
};


int main () {
    Dog dog;
    dog.talk ();

    Cat cat;
    cat.talk ();
    
    return 0;
}
