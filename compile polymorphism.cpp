#include <iostream>
using namespace std;


class Complex{
    public:
    int real;
    int image;
    Complex(int i = 0, int r = 0) : real(r), image(i) {};
    Complex operator + (Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    };
    void display(){
        cout << "Number:" << real << "+i" << image << endl;
    }
};

int main(){
    Complex c1(5, 3);
    Complex c2(2, 5);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}