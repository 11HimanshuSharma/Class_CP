#include "prime_number.cpp" 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> Prime_pairs;

    for (int i = 1; i <= n; i++) {
        if (checkPrime(i) && checkPrime(n % i)) {
            Prime_pairs.push_back({i, n % i});
        }
      
    }

  
    for (const auto& pair : Prime_pairs) {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }

    return 0;
}
