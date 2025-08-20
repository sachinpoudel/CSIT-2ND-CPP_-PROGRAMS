// class ra object concept ko lagi exampleho
#include <iostream>
#include <string>
using namespace std;

class Actor {
private:
    string name;
    int rating;

public:
    Actor(string n, int r) : name(n), rating(r) {}

    int getRating() const {
        return rating;
    }

    string getName() const {
        return name;
    }

    void display() const {
        cout << "Actor: " << name << ", Rating: " << rating << endl;
    }
};

int main() {
    const Actor a1("Leonardo", 9);
    const Actor a2("Tom", 4);
    const Actor a3("Emma", 6);

    cout << "Actors with rating greater than 5:\n";

    if (a1.getRating() > 5)
        cout << a1.getName() << endl;

    if (a2.getRating() > 5)
        cout << a2.getName() << endl;

    if (a3.getRating() > 5)
        cout << a3.getName() << endl;

    return 0;
}
