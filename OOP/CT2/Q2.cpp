// ANKIT KUMAR 2K20/CO/072
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class onlineshopping {
public:
    int price;
    onlineshopping() {
        price = 100;
    }
    void show() {
        cout << "\nWelcome!!";
    }
};

class firstcry : public virtual onlineshopping {
};

class hopscotch : public virtual onlineshopping {
};

class customer : public firstcry, public hopscotch {
};

int main() {
    customer one;
    one.show();
    cout << "Price = " << one.price << endl;
    return 0;
}