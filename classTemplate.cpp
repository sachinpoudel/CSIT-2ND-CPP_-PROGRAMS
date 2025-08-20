// class template ko simple example mtra ho
#include<iostream>
using namespace std; 

template <typename T1, typename T2>

class myPair {
    T1 first; T2 second;
    public: 
    myPair(T1 a, T2 b) {
        first = a;
        second = b;
    };
    void display (){
        cout << "first " << first << "second " << second<< endl;

    };
};
int main (){
    myPair< int , double> p1(10,20.33);
    p1.display();
    return 0;
}