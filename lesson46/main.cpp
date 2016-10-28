#include <iostream>
#include <set>

using namespace std;

void prime_gen (int n) {
    set<int> primes;
    for (int nums = 2; nums <= n; nums++)
        primes.insert (nums);

    set<int>::iterator iter;

    for (int mults = 2; mults * mults <= n; mults++) {
        iter = primes.find (mults);
        if (iter != primes.end ()) {
            for (int k = 2 * mults; k <= n; k += mults) {
                iter = primes.find (k);
                if (iter != primes.end ())
                    primes.erase (*iter);
            }
        } 
    }
    int count = 1;
    for (iter = primes.begin (); iter != primes.end (); iter++) {
        cout << *iter << " ";
        if (count++ % 10 == 0)
            cout << endl;
    }
    cout << endl;
}

int main () {
    int n;
    cout << "Enter n: ";
    cin >> n;
    prime_gen (n);
    return 0;
}