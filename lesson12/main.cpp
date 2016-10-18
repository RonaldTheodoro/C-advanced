#include <iostream>


using namespace std;


class Shape {
    virtual void set_x (int x) = 0;
    virtual void set_y (int y) = 0;
    virtual int get_x () const = 0;
    virtual int get_y () const = 0;
    virtual void draw () const = 0;
};


class Circle : public Shape {
    private:
        int x, y, radius; 

    public:
        Circle (int x, int y, int radius) {
            this->x = x;
            this->y = y;
            this->radius = radius;
        }

        virtual void set_x (int x) {
            this->x = x;
        }

        virtual void set_y (int y) {
            this->y = y;
        }

        void set_radius (int radius) {
            this->radius = radius;
        }
        
        virtual int get_x () const {
            return this->x;
        }

        virtual int get_y () const {
            return this->y;
        }
        
        int get_radius () const {
            return this->radius;
        }
        
        virtual void draw () const {
            cout << "Drawing circle at: ";
            cout << get_x () << ", " << get_y ();
            cout << " with a radius of: " << get_radius () << endl;
        }
};


int main () {
    Circle c (2, 3, 5);
    c.draw ();
    return 0;
}