#include<iostream>
using namespace std;

double pourwater(double water, int r, int c) {
    if (r == 0 && c == 0) return min(water, 1.0);
    if (c < 0 || c > r) return 0;
    double glass1 = 0.0;
    double glass2 = 0.0;
    if (water > 1.0) {
        double extra = water - 1.0;
        glass1 = pourwater(extra / 2.0, r - 1, c - 1);
        glass2 = pourwater(extra / 2.0, r - 1, c);
        return 1.0 + glass1 + glass2;
    }
    return water;
}

double waterOverflow(int K, int R, int C) {
    return pourwater((double)K, R, C);
}

int main() {
    int k, r, c;
    cin >> k >> r >> c;
    cout << waterOverflow(k, r, c);
    return 0;
}