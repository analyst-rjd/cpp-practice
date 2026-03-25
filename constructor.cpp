#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;

    // Constructor: Called when object is created
    Car(string b) : brand(b) {
        cout << "[Constructor]: " << brand << " is being built in the factory." << endl;
    }

    // Destructor: Called when object is destroyed
    ~Car() {
        cout << "[Destructor]: " << brand << " is being scrapped at the junkyard." << endl;
    }
};

int main() {
    cout << "--- Program Start ---" << endl;

    // 1. Stack Object (Automatic)
    {
        Car stackCar("Toyota"); 
    } // <--- stackCar DIES here automatically as the bracket closes.

    cout << "---------------------" << endl;

    // 2. Heap Object (Manual)
    Car* heapPtr = new Car("Ferrari"); // <--- Constructor runs NOW.
    
    cout << "The Ferrari is sitting in the heap memory..." << endl;

    // If we don't do anything, the Ferrari lives forever (Memory Leak!)
    
    delete heapPtr; // <--- Destructor runs NOW. 

    cout << "--- Program End ---" << endl;
    return 0;
}