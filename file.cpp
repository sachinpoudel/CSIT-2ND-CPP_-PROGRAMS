#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string name;
    int age;

    cout << "Enter your name:";
    getline(cin,name);

    cout << "Enter your Age:";
    cin >> age;

    ofstream outFile("user.txt");
    if(outFile.is_open()){
        outFile << name << endl;
        outFile << age << endl;
        outFile.close();
        cout << "Data written to file successfully:";
    }else{
        cout << "error opening file for writing";
    }

    //reading from the file

    ifstream inFile("user.txt");
    if(inFile.is_open()){
        string filename;
        int fileAge;

        getline(inFile, filename);

        cout << filename << endl;
        cout << fileAge << endl;
        inFile.close();
    }else{
        cout << "Error opening file";
    }
    return 0;
} 
