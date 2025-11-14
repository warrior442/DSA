#include <iostream>
using namespace std;

// Method 1: Direct nCr (best method)
long double nCr(int n, int r) {

    if (r > n) return 0;

    if (r > n - r)
        r = n - r;

    long long result = 1;

    for (int i = 1; i <= r; i++) {
        result = result * (n - r + i) / i;
    }

    return result;
}

// Method 2: Using numerator and denominator (your logic)
long long numerator(int n, int r) {
    long long result = 1;

    for (int i = 0; i < r; i++) {
        result = result * (n - i);
    }
    return result;
}

long long denominator(int r) {
    long long result = 1;

    for (int i = 1; i <= r; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int n, r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    // Method 1 (best)
    long double ans1 = nCr(n, r);
    cout << "nCr (best method) = " << ans1 << endl;

    // Method 2 (your numerator/denominator method)
    long long num = numerator(n, r);
    long long den = denominator(r);

    long double ans2 = (long double)num / den;
    cout << "nCr (your method) = " << ans2 << endl;

    return 0;
}
