#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string rollNum,name,fName,address,search;
    fstream file;
    public:

    void addStu();
    void viewStudent();
    void searchStu();
};


int main(){
    char choice; 
    cout<< "---------------------------------"<<endl;
    cout<< "1.Add Student Record\n";
    cout<< "2.View all Student Record\n";
    cout<< "3.search Student Record\n";
    cout<< "4.exit\n";
    cout<< "---------------------------------"<<endl;
cin>> choice;

temp obj; // Declare an object of class temp

switch(choice){
    case '1': 
    obj.addStu();
    break;
    
    case '2':
    obj.viewStudent();
break;

case '3':
obj.searchStu();
break;

default:
cout<<"invalid choice";

};
};

void temp:: addStu(){


    cout<<"Enter Student Name::"<<endl;
    getline(cin,name);

      cout<<"Enter Student Roll No::"<<endl;
    getline(cin,rollNum);

      cout<<"Enter Student Father Name::";
    getline(cin,fName);

      cout<<"Enter Student Address::";
    getline(cin,address);

    file.open("stuData.txt", ios::out | ios::app);
    file<<name<<"*";
    file<<rollNum<<"*";
    file<<fName<<"*";
    file<<address<<"*";
    file.close();
}

void temp:: viewStudent(){
    file.open("stuData.txt", ios::in);
    std::getline(file, name, '*');
    std::getline(file, rollNum, '*');
    std::getline(file, fName, '*');
    std::getline(file, address, '*');

    while(!file.eof()){
        cout<<"\n";
        cout<< "Student Name:"<<name<<endl;
        cout<< "Student Roll No:"<<rollNum<<endl;
        cout<< "Student Father Name:"<<fName<<endl;
        cout<< "Student Address:"<<address<<endl;

         std::getline(file, name, '*');
    std::getline(file, rollNum, '*');
    std::getline(file, fName, '*');
    std::getline(file, address, '*');
    }
    file.close();
};

void temp:: searchStu(){
    cout<< "Enter the student roll number\n";
    getline(cin,search);

    file.open("stuData.txt", ios:: in);
     std::getline(file, name, '*');
    std::getline(file, rollNum, '*');
    std::getline(file, fName, '*');
    std::getline(file, address, '*');

    while(!file.eof()){
        if(rollNum == search){
            cout<<"\n";
            cout<< "Student Name:"<<name<<endl;
        cout<< "Student Roll No:"<<rollNum<<endl;
        cout<< "Student Father Name:"<<fName<<endl;
        cout<< "Student Address:"<<address<<endl;
        }
           std::getline(file, name, '*');
    std::getline(file, rollNum, '*');
    std::getline(file, fName, '*');
    std::getline(file, address, '*');
    }
    file.close();
};