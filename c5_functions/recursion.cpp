#include <iostream>
using namespace std;

unsigned long factFunc(unsigned long n) {
    
    if (n > 1) {
        return n * factFunc(n - 1);
    } else {
        return 1;
    }
}

int main (){
    int n;
    unsigned long fact;
    cout << "Enter an Integer! " << endl;
    cin >> n;

    fact = factFunc(n);
    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}

// g++ recursion.cpp -o recursion