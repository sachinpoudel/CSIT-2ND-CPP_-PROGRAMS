 #include<iostream>
using namespace std;
class TIME {
    private:
    int hours , minutes;
    
    public:
    void getTime(){
    cout << "Enter hour"<< endl;
    cin >> hours;

    cout << "Enter minutes"<< endl;
    cin >> minutes;


}

void sum(TIME obj1, TIME obj2){
    minutes = obj1.minutes + obj2.minutes;
    hours = obj1.hours + obj2.hours + (minutes / 60);
    
    minutes = minutes % 60;
}
void putTime(){
    cout << "time" << hours << "Hours:"<< minutes << "minutes" << endl;

}
};
int main(){
    TIME t1,t2,t3;
    cout<< "enter the time for t1\n";
    t1.getTime();

    cout << "Enter the time for t2\n";
    t2.getTime();

    t3.sum(t1,t2);
    t3.putTime();

    return 0;
}