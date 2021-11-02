// ANKIT KUMAR 2K20/CO/072
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class FirstCry;
class ToyShop {
private:
    // {Quantity , Price}
    pair<int, int> teether;
    pair<int, int> Rattle;
    pair<int, int> Piano;
    pair<int, int> teddy;
    pair<int, int> stroller;
    int totalPrice;

public:
    ToyShop() {
        totalPrice = 0;
        teether.first = 2;
        teether.second = 10;
        totalPrice += teether.first * teether.second;
        Rattle.first = 3;
        Rattle.second = 20;
        totalPrice += Rattle.first * Rattle.second;
        Piano.first = 2;
        Piano.second = 30;
        totalPrice += Piano.first * Piano.second;
        teddy.first = 6;
        teddy.second = 40;
        totalPrice += teddy.first * teddy.second;
        stroller.first = 10;
        stroller.second = 50;
        totalPrice += stroller.first * stroller.second;
    }

    ~ToyShop() {
        cout << "Object deleted" << endl;
    }

    void showPrice(int num) {
        switch (num) {
        case (1):
            cout << teether.second << endl;
            break;
        case (2):
            cout << Rattle.second << endl;
            break;
        case (3):
            cout << Piano.second << endl;
            break;
        case (4):
            cout << teddy.second << endl;
            break;
        case (5):
            cout << stroller.second << endl;
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }

    void addItem(int num, int quantity) {
        switch (num) {
        case (1):
            teether.first += quantity;
            totalPrice += teether.second * quantity;
            break;
        case (2):
            Rattle.first += quantity;
            totalPrice += Rattle.second * quantity;
            break;
        case (3):
            Piano.first += quantity;
            totalPrice += Piano.second * quantity;
            break;
        case (4):
            teddy.first += quantity;
            totalPrice += teddy.second * quantity;
            break;
        case (5):
            stroller.first += quantity;
            totalPrice += stroller.second * quantity;
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }

    void showTotalPrice() {
        cout << totalPrice << endl;
    }

    void deleteItem(int num) {
        switch (num) {
        case (1):
            totalPrice -= teether.first * teether.second;
            teether.first = 0;
            break;
        case (2):
            totalPrice -= Rattle.first * Rattle.second;
            Rattle.first = 0;
            break;
        case (3):
            totalPrice -= Piano.first * Piano.second;
            Piano.first = 0;
            break;
        case (4):
            totalPrice -= teddy.first * teddy.second;
            teddy.first = 0;
            break;
        case (5):
            totalPrice -= stroller.first * stroller.second;
            stroller.first = 0;
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }

    void ProductAvailable(int num) {
        switch (num) {
        case (1):
            if (teether.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (2):
            if (Rattle.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (3):
            if (Piano.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (4):
            if (teddy.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (5):
            if (stroller.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }
    friend void compare(ToyShop &ts1, FirstCry &fc1, int num);
};

class FirstCry {
private:
    pair<int, int> teether;
    pair<int, int> Rattle;
    pair<int, int> Piano;
    pair<int, int> teddy;
    pair<int, int> stroller;
    int totalPrice;

public:
    FirstCry() {
        totalPrice = 0;
        teether.first = 2;
        teether.second = 5;
        totalPrice += teether.first * teether.second;
        Rattle.first = 3;
        Rattle.second = 12;
        totalPrice += Rattle.first * Rattle.second;
        Piano.first = 2;
        Piano.second = 100;
        totalPrice += Piano.first * Piano.second;
        teddy.first = 6;
        teddy.second = 150;
        totalPrice += teddy.first * teddy.second;
        stroller.first = 10;
        stroller.second = 200;
        totalPrice += stroller.first * stroller.second;
    }

    ~FirstCry() {
        cout << "Object deleted" << endl;
    }

    void addItem(int num, int quantity) {
        switch (num) {
        case (1):
            teether.first += quantity;
            totalPrice += teether.second * quantity;
            break;
        case (2):
            Rattle.first += quantity;
            totalPrice += Rattle.second * quantity;
            break;
        case (3):
            Piano.first += quantity;
            totalPrice += Piano.second * quantity;
            break;
        case (4):
            teddy.first += quantity;
            totalPrice += teddy.second * quantity;
            break;
        case (5):
            stroller.first += quantity;
            totalPrice += stroller.second * quantity;
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }

    void showPrice(int num) {
        switch (num) {
        case (1):
            cout << teether.second << endl;
            break;
        case (2):
            cout << Rattle.second << endl;
            break;
        case (3):
            cout << Piano.second << endl;
            break;
        case (4):
            cout << teddy.second << endl;
            break;
        case (5):
            cout << stroller.second << endl;
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }

    void showTotalPrice() {
        cout << totalPrice << endl;
    }

    void deleteItem(int num) {
        switch (num) {
        case (1):
            totalPrice -= teether.first * teether.second;
            teether.first = 0;
            break;
        case (2):
            totalPrice -= Rattle.first * Rattle.second;
            Rattle.first = 0;
            break;
        case (3):
            totalPrice -= Piano.first * Piano.second;
            Piano.first = 0;
            break;
        case (4):
            totalPrice -= teddy.first * teddy.second;
            teddy.first = 0;
            break;
        case (5):
            totalPrice -= stroller.first * stroller.second;
            stroller.first = 0;
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }

    void ProductAvailable(int num) {
        switch (num) {
        case (1):
            if (teether.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (2):
            if (Rattle.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (3):
            if (Piano.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (4):
            if (teddy.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        case (5):
            if (stroller.first == 0) {
                cout << "Product out of stock" << endl;
            } else {
                cout << "Product available" << endl;
            }
            break;
        default:
            cout << "Enter correct num" << endl;
            break;
        }
    }
    friend void compare(ToyShop &ts1, FirstCry &fc1, int num);
};

void compare(ToyShop &ts1, FirstCry &fc1, int num) {
    switch (num) {
    case (1):
        cout << ts1.teether.second << " " << fc1.teether.second << endl;
        cout << abs(ts1.teether.second - fc1.teether.second) << endl;
        break;
    case (2):
        cout << ts1.Rattle.second << " " << fc1.Rattle.second << endl;
        cout << abs(ts1.Rattle.second - fc1.Rattle.second) << endl;
        break;
    case (3):
        cout << ts1.Piano.second << " " << fc1.Piano.second << endl;
        cout << abs(ts1.Piano.second - fc1.Piano.second) << endl;
        break;
    case (4):
        cout << ts1.teddy.second << " " << fc1.teddy.second << endl;
        cout << abs(ts1.teddy.second - fc1.teddy.second) << endl;
        break;
    case (5):
        cout << ts1.stroller.second << " " << fc1.stroller.second << endl;
        cout << abs(ts1.stroller.second - fc1.stroller.second) << endl;
        break;
    default:
        cout << "Enter correct num" << endl;
        break;
    }
}

int main() {
    ToyShop toy1;

    /*
        teether -> 1
        Rattle -> 2
        Piano -> 3
        teddy -> 4
        stroller -> 5
    */

    toy1.addItem(1, 20); // Add 20 teether in ToyShop
    toy1.showPrice(2);   // shows price of Rattle
    toy1.showTotalPrice();
}