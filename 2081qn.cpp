//Create a class BOOK with data members name and price. Write a member function that will take two objects of BOOK
// class and return the object with lower price

#include<iostream>

using namespace std;

class BOOK {
    string name;
    float price;

    public: 
    BOOK(string n, float p){
        name = n;
        price = p;
    };

    void display(){
        cout<< "Name" << name << "Price"<< price << endl;
    }
    BOOK lowerprice(BOOK b){
        if(price < b.price){
            return *this;
        }else{
            return b;
        };
    };
};

int main (){
 BOOK b1("c_programming" , 500);
 BOOK b2("java_programming" , 300);

 BOOK cheaper = b1.lowerprice(b2);
 cheaper.display();

return 0;
}
