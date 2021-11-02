#include <iostream>

using namespace std;

void swapUsingREF(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    cout << "Initially a = " << a << " and b = " << b << "\n";
    swapUsingREF(a, b);
    cout << "After swap a = " << a << " and b = " << b << "\n";
    return 0;
}