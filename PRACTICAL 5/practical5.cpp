#include <iostream>
using namespace std;

class Vehicle {
public:
    int n;
    Vehicle(int num) : n(num) {}

    virtual Vehicle& operator++() {
        n++;
        return *this;
    }

    virtual Vehicle operator++(int) {
        Vehicle v(*this);
        operator++();
        return v;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(int num) : Vehicle(num) {}

    // No need to override operator++(int) here
    // It will use the base class implementation

    virtual ~Car() {}
};

int main() {
    Vehicle* v = new Car(10);
    (*v)++;
    cout << "Updated value: " << v->n << endl;
    delete v;
    return 0;
}
