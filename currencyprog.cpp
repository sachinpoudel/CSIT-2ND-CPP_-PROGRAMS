#include <iostream>
using namespace std;

class Dollar; 

class Rupee {
    float value;

public:
    Rupee() : value(0) {}
    Rupee(float v) : value(v) {}

    operator Dollar();

    float getValue() const {
        return value;
    }

    void display() const {
        cout << value << " Rupees" << endl;
    }
};

class Dollar {
    float value;

public:
    Dollar() : value(0) {}
    Dollar(float v) : value(v) {}

    operator Rupee() {
        return Rupee(value * 133); 
    }

    float getValue() const {
        return value;
    }

    void display() const {
        cout << value << " Dollars" << endl;
    }
};

Rupee::operator Dollar() {
    return Dollar(value / 133); 
}

int main() {
    int choice;
    float amount;

    cout << "Currency Converter\n";
    cout << "1. Rupee to Dollar\n";
    cout << "2. Dollar to Rupee\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter amount in Rupees: ";
        cin >> amount;

        Rupee r(amount);
        Dollar d = r; 
        cout << "Converted Amount: ";
        d.display();

    } else if (choice == 2) {
        cout << "Enter amount in Dollars: ";
        cin >> amount;

        Dollar d(amount);
        Rupee r = d; 
        cout << "Converted Amount: ";
        r.display();

    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
