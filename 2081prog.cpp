#include <iostream>
#include <cstring>
using namespace std;

class Person {
protected:
    int age;
    float salary;

public:
    Person(int a, float s) {
        age = a;
        salary = s;
    }

    void displayPerson() {
        cout << "Age: " << age << ", Salary: " << salary << endl;
    }
};

class Student : public Person {
    int sid;
    float cgpa;

public:
    Student(int a, float s, int id, float c) : Person(a, s) {
        sid = id;
        cgpa = c;
    }

    void display() {
        cout << "--- Student Info ---" << endl;
        displayPerson();
        cout << "Student ID: " << sid << ", CGPA: " << cgpa << endl;
    }
};

class Doctor : public Person {
    int did;
    char hname[50];

public:
    Doctor(int a, float s, int id, const char* h) : Person(a, s) {
        did = id;
        strcpy(hname, h);
    }

    void display() {
        cout << "--- Doctor Info ---" << endl;
        displayPerson();
        cout << "Doctor ID: " << did << ", Hospital Name: " << hname << endl;
    }
};

class Clerk : public Person {
public:
    Clerk(int a, float s) : Person(a, s) {}

    void display() {
        cout << "--- Clerk Info ---" << endl;
        displayPerson();
    }
};

int main() {
    Student s1(20, 0.0, 101, 3.85);
    Doctor d1(45, 85000.0, 201, "City Hospital");
    Clerk c1(30, 30000.0);

    s1.display();
    cout << endl;
    d1.display();
    cout << endl;
    c1.display();

    return 0;
}
