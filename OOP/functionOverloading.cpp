// ANKIT KUMAR 2K20/CO/72
#include <iostream>
using namespace std;

float area(int r) { return 3.14159 * r * r; }

float area(int b, int h) { return 0.5 * b * h; }

int main() {
    cout << "Area of circle : " << area(10) << " sq. units\n";
    cout << "Area of triangle : " << area(10, 20) << " sq. units\n";
    return 0;
}