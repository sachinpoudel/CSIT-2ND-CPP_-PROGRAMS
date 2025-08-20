#include <iostream>
#include <stdexcept>  

using namespace std;

// Function to get and validate age
int getAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check for input failure
    if (cin.fail()) {
        throw runtime_error("Invalid input! Age must be a number.");
    }

    // Custom validation
    if (age < 0) {
        throw out_of_range("Age cannot be negative.");
    } else if (age > 200) {
        throw out_of_range("Age cannot be more than 200.");
    }

    return age;
}

int main() {
    try {
        int age = getAge();
        cout << "Your age is: " << age << endl;
    }
    catch (const out_of_range& e) {
        cerr << "Range Error: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Input Error: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unknown error occurred." << endl;
    }

    return 0;
}
