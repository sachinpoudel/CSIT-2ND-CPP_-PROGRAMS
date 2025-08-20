#include <iostream>
using namespace std;

class Height {
private:
    int meter;
    int centimeter;

public:
    // Constructor
    Height(int m = 0, int cm = 0) {
        meter = m;
        centimeter = cm;
    }

    // Friend function to overload + operator
    friend Height operator+(const Height& h1, const Height& h2);

    // Function to display height
    void display() const {
        cout << meter << " meter " << centimeter << " centimeter" << endl;
    }
};

// Friend function definition
Height operator+(const Height& h1, const Height& h2) {
    Height temp;
    temp.meter = h1.meter + h2.meter;
    temp.centimeter = h1.centimeter + h2.centimeter;

    // Convert centimeters to meters if >= 100
    if (temp.centimeter >= 100) {
        temp.meter += temp.centimeter / 100;
        temp.centimeter = temp.centimeter % 100;
    }

    return temp;
}

int main() {
    Height h1(2, 75);  // 2m 75cm
    Height h2(1, 50);  // 1m 50cm

    Height h3 = h1 + h2;

    cout << "First height: ";
    h1.display();

    cout << "Second height: ";
    h2.display();

    cout << "Sum of heights: ";
    h3.display();

    return 0;
}
