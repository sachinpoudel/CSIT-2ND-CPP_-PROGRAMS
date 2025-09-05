// prog to add time like 1 hrs 30 min and 2 hrs 20 min ... using operator overloading and friend function

#include<iostream>

using namespace std;

class TIME {
    int hours ;
    int minutes;

    public: 
    TIME(int h=0, int m=0){
        hours = h;
        minutes = m;
    };

    void display(){
        cout<< hours<< "Hours " <<  minutes << "Minutes " << endl;
    };
friend TIME operator+ (const TIME hour , const TIME minute);
};

TIME  operator+  (const TIME t1 , const TIME t2){
    TIME result;

    result.hours = t1.hours +  t2.hours;
    result.minutes = t1.minutes + t2.minutes;

    if(result.minutes >= 60){
        result.hours += result.minutes / 60;
        result.minutes = result.minutes % 60;
    };

    return result;
};

int main(){
    TIME t1(6 , 45);
    TIME t2(5 , 56);

    TIME t3= t1+ t2;
    t3.display();
    return 0;
}