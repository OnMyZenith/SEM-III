#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}
int main() {
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << add(a, b) << '\n';
    return 0;
}