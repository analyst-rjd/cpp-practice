#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string model;
    public:
        Car(string b) : model(b) {};
        void details(){
            cout << "The model name is:" << model;
        }
};

int main(){
    Car bmw("X5");
    bmw.details();
    return 0;
}