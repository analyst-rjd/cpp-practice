#include <iostream>
using namespace std;

int fibonacci (int num){
    if(num <= 1){
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(){
    int count;
    cout << "Enter a positive integer: ";
    cin >> count;

    

    cout << "The first" << count << "numbers include:\n";
    for (int i = 0; i < count; i++){
        cout << fibonacci(i) << "\n";
    }

    return 0;
}