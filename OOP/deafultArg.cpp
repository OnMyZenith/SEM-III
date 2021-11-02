#include <iostream>

using namespace std;

#define makePositive(n) (((n) < 0) ? -1 * (n) : (n))

double power(double m, int n = 2) {
    double result = 1;

    for (int i = 1; i <= makePositive(n); i++)
        result *= m;

    if (n < 0) return 1 / result;

    return result;
}

int main() {
    double m = 0;
    int n = INT_MIN;
    cout << "Enter the Number and Power : ";

    double i;
    while (cin >> i) {
        if (m == 0) {
            m = i;
            continue;
        } else {
            n = (int)i;
            break;
        }
    }

    if (n == INT_MIN) {
        cout << m << " squared = " << power(m);
    } else {
        cout << m << " to the power " << n << " = " << power(m, n);
    }
    return 0;
}