#include<iostream>
using namespace std;

class Height{
    int meter;
    int centimeter;

    public:
    //constructor
Height(int m=0,int cm=0){
    meter = m;
    centimeter = cm;

}
friend Height operator+ (const Height& h1, const Height& h2);
void display() const {
    cout << meter << "meters and" << centimeter << "centimeters" << endl;
}
};
Height operator+ (const Height& h1, const Height& h2){
    Height result;

    result.meter = h1.meter + h2.meter;
    result.centimeter = h1.centimeter + h2.centimeter;

    if(result.centimeter >= 100){
        result.meter = result.meter + (result.centimeter / 100);
        result.centimeter = result.centimeter % 100;
    }
    return result;
}
int main(){
    Height h1(1,47);
    Height h2 (3, 88);
    Height h3 = h1+ h2;

    cout << "First Height" << endl;
    h1.display();

    cout << "Second Height" << endl;
    h2.display();

    cout << "Total Height" << endl;
    h3.display();

    return 0;
}