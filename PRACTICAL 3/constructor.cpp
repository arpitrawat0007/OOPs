#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
protected:
    string name;
public:
    Animal(string _name) : name(_name) {}
    virtual void makeSound() const = 0; // Pure virtual function
    void displayInfo() const {
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(string _name) : Animal(_name) {}
    void makeSound() const override {
        cout << name << " says: Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    Cat(string _name) : Animal(_name) {}
    void makeSound() const override {
        cout << name << " says: Meow!" << endl;
    }
};

int main() {
    Dog myDog("Buddy");
    Cat myCat("Whiskers");
    
    myDog.displayInfo();
    myDog.makeSound();
    
    myCat.displayInfo();
    myCat.makeSound();
    
    return 0;
}