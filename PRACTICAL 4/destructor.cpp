#include <iostream>
#include <string>

using namespace std;

// Base class
class Publication {
protected:
    string title;
    float price;
public:
    // Constructor
    Publication(string _title, float _price) : title(_title), price(_price) {
        cout << "Publication constructor called for: " << title << endl;
    }
    
    // Destructor
    ~Publication() {
        cout << "Publication destructor called for: " << title << endl;
    }
    
    // Function to display publication details
    void displayInfo() const {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};

// Derived class
class Book : public Publication {
private:
    int pageCount;
public:
    // Constructor
    Book(string _title, float _price, int _pageCount) : Publication(_title, _price), pageCount(_pageCount) {
        cout << "Book constructor called for: " << title << endl;
    }
    
    // Destructor
    ~Book() {
        cout << "Book destructor called for: " << title << endl;
    }
    
    // Function to display book details
    void displayInfo() const {
        Publication::displayInfo();
        cout << "Page Count: " << pageCount << endl;
    }
};

int main() {
    // Creating objects
    Publication pub("The New York Times", 3.99);
    Book book("The Great Gatsby", 9.99, 180);
    
    // Displaying information
    cout << "\nPublication Information:\n";
    pub.displayInfo();
    
    cout << "\nBook Information:\n";
    book.displayInfo();
    
    return 0;
}