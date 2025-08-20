// wap in cpp that stores information of
// employees in a file and display the file content in ascending order of their salary ..

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Employee
{
    string name;
    int id;
    float salary;
};

void addEmployee()
{
    ofstream file("file2.txt", ios::app);
    Employee emp;

    cout << "Enter employee name:";
    cin >> emp.name;

    cout << "Enter employee id:";
    cin >> emp.id;

    cout << "Enter employee salary:";
    cin >> emp.salary;

    file << emp.name << " " << emp.id << " " << emp.salary << endl;
    file.close();

    cout << "Employee added successfully \n";
}

void displayEmployeeBySalary()
{
    ifstream file("file2.txt");
    vector<Employee> employees;  // empty list (no employees yet)
    Employee emp; // 1 temporary Employee

    while (file >> emp.name >> emp.id >> emp.salary)
    {
        employees.push_back(emp); // euta emp obj add hunx in employee array or vector say
    }
    file.close();

    if (employees.empty())
    {
        cout << "NO employees found\n";
        return;
    }
    sort(employees.begin(), employees.end(), [](const Employee &a, const Employee &b) {
        return a.salary < b.salary;
    });
    };


int main() {
    int choice;
    
    while (true) {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees by Salary\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
            displayEmployeeBySalary();
                break;
            case 3:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    
    return 0;
}