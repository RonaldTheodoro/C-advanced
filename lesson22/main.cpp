#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class List {
    private:
        vector<T> datastore;

    public:
        List () { }

        void add (T item) {
            datastore.push_back (item);
        }

        void display () {
            for (int count = 0; count < datastore.size (); count++)
                cout << datastore[count] << endl;
        }
};


int main () {
    List<int> list;

    list.add (1);
    list.add (2);
    list.add (3);
    list.add (4);
    list.add (5);
    list.display ();
    return 0;
}