#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    int mil;
    Car(int m) : mil(m) {};
    virtual void mileage() {
        cout << "Generic";
    };
};

class Mercedes: public Car{
    public:
    Mercedes(int m):Car(m){}
    void mileage() override {
        cout << "The mileage is " << mil << endl;
    }
};

class BMW: public Car{
    public:
    BMW(int m):Car(m){}
    void mileage() override {
        cout << "The mileage is " << mil << endl;
    }
};

int main(){
    Car *mycar;
    Mercedes xm5(20);
    BMW Cclass(39);

    mycar = &xm5;
    mycar->mileage();

    mycar = &Cclass;
    mycar->mileage();

    return 0;
}