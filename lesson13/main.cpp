#include <iostream>
#include <vector>


using namespace std;


class Quadrilateral {

    protected:
        double side1, side2, side3, side4;

    public:
        Quadrilateral (double s1, double s2, double s3, double s4) {
            this->side1 = s1; 
            this->side2 = s2; 
            this->side3 = s3; 
            this->side4 = s4;
        }

        virtual void display () {
            cout << "Quadrilateral with side: ";
            cout << this->side1 << " ";
            cout << this->side2 << " ";
            cout << this->side3 << " ";
            cout << this->side4 << " ";
            cout << endl;
        }
};


class Trapezoid : public Quadrilateral {
    public:
        Trapezoid (double s1, double s2, double s3, double s4) 
            : Quadrilateral (s1, s2, s3, s4) { }

        virtual void display () {
            cout << "Trapezoid with side: ";
            cout << this->side1 << " ";
            cout << this->side2 << " ";
            cout << this->side3 << " ";
            cout << this->side4 << " ";
            cout << endl;
        }
};


class Square : public Quadrilateral {
    public:
        Square (double side) : Quadrilateral (side, side, side, side) { }
        
        virtual void display () {
            cout << "Square with side: ";
            cout << this->side1 << " ";
            cout << this->side2 << " ";
            cout << this->side3 << " ";
            cout << this->side4 << " ";
            cout << endl;
        }
};


int main () {
    Quadrilateral q (10, 12, 15, 14);
    Trapezoid t (3, 5, 5, 2);
    Square s (6);

    vector<Quadrilateral*> vet;
    vet.push_back (&q);
    vet.push_back (&t);
    vet.push_back (&s);

    for (int count = 0; count < vet.size (); count++)
        vet[count]->display ();
    
    return 0;
}