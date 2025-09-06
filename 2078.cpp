//Write a program according to the specification given below:

//– Create a class Account with data members acc no, balance, and min_balance(static)
//-Include methods for reading and displaying values of objects
//– Define static member function to display min_balance
//-Create array of objects to store data of 5 accounts and read and display values of each object

#include<iostream>

using namespace std;

class Account {
    public:
    int acc_no;
    int balance;

    Account(int a =0, int b=0){
        acc_no = a;
        balance = b;
    }

    static int min_balance;

void getData(){
    cout<< "Enter your acc no :"<<endl;
    cin >> acc_no;

    cout<< "Enter your balance"<<endl;
    cin>>balance;
}

    void displayData(){
        cout<<"Account NO :"<< acc_no << "Balance: " << balance<< endl;
    };

    static void getMinBal(){
        cout<< "Enter your min balance "<<endl;
        cin>> min_balance;
    };
    static void displayMinBal(){
        cout <<"Minimal Balance is: "<< min_balance<<endl;
    };
};
int Account::min_balance = 0;

int main(){
    Account acc[5];

   Account:: getMinBal(); 

    cout<<"Enter your details:"<<endl;
    for(int i=0; i<5; i++){
        acc[i].getData();
    }

    cout<<"Your account details is : "<<endl;
     for(int i=0; i<5; i++){
        acc[i].displayData();
        acc[i].displayMinBal();
    }

    return 0;
};