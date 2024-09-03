#include <iostream>
using namespace std;

// Function to perform modular exponentiation
// It returns (x^y) % p
long long power(long long x, unsigned int y, int p) {
    long long res = 1; // Initialize result
    x = x % p;         // Update x if it is more than or equal to p

    while (y > 0) {
        // If y is odd, multiply x with the result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p; // Change x to x^2
    }
    return res;
}

// Function to check Fermat's Little Theorem
bool checkFermat(int a, int p) {
    if (p <= 1)
        return false; // p must be greater than 1
    if (a <= 0 || a >= p)
        return false; // a must be in the range 1 <= a < p

    // Check if a^(p-1) % p == 1
    return (power(a, p - 1, p) == 1);
}

int main() {
    int a, p;
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a prime number p: ";
    cin >> p;

    if (checkFermat(a, p))
        cout << "Fermat's Little Theorem holds for a = " << a << " and p = " << p << endl;
    else
        cout << "Fermat's Little Theorem does NOT hold for a = " << a << " and p = " << p << endl;

    return 0;
}
