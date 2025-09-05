// this is the example for static data members and static member function
#include<iostream>

using namespace std;

class Counter {
    static int count;

    public:
    Counter(){
        count++;
    };
   static void displayCount(){
        cout<<"The count is "<<count<<endl;
    };
};
int Counter::count=0;

int main(){
    Counter c1;
    Counter  c2 ,c3;
    Counter::displayCount();
    return 0;
};