#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void input() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }

    void display() {
        cout << "Roll: " << roll << "\nName: " << name;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
