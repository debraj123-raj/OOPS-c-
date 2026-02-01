#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function";
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
