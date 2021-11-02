//Ankit Kumar 2K20/CO/72
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class passenger;
class fare {
    int amt;

public:
    void setfare() {
        cout << "Enter fare :";
        cin >> amt;
    }
    friend void display(passenger &o1, fare &o2);
};
class passenger {
    string name;
    int idno;

public:
    void set_passenger() {
        cout << "Name of passenger :";
        getline(cin, name);
        cout << "ID of passenger :";
        cin >> idno;
    }
    friend void display(passenger &o1, fare &o2);
};
void display(passenger &o1, fare &o2) {
    cout << "The name of the passenger with id no " << o1.idno << " is " << o1.name << " and the fare is " << o2.amt << endl;
}
int main() {
    passenger obj[1];
    fare o[1];
    obj[0].set_passenger();
    o[0].setfare();
    display(obj[0], o[0]);
}