//  function template bujna simple example 

#include<iostream>

using namespace std;

template <typename T>

T getMax(T a, T b ){
    return (a>b) ? a : b;
}
int main(){
    cout << "max of 10 and 20 is " << getMax(10,20)<< endl;
    cout << "max of 1.5 and 2.5 is " << getMax(1.5,2.5)<< endl;
    cout << "max of A and B is " << getMax('A', 'B')<< endl;
}






