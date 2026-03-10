#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string model;
    public:
        Car(string b) : model(b) {};
        void details(){
            cout << "The model name is:" << model<<endl;
        }
};

int main(){
    Car bmw("X5");
    Car mercedes("Cclass");
    bmw.details();
    mercedes.details();

    return 0;
}