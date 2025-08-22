//WAP that can store DepartmentID and DepartmentName with constructor. 
//Also write destructor in the same class and show that the objects are destroyed in the reverse order of creation with suitable message.

#include<iostream>
using namespace std;

class Department{
    string deptName;
    int deptId;
    public : 

    Department (string name, int id){
        deptName = name ;
        deptId = id;
        cout<< "constructor"<< deptId << deptName <<endl;
    };
    ~Department (){
       
        cout<< "Destructor"<< deptId << deptName <<endl;
    };
};
int main(){
    Department d1("math" , 100);
};

