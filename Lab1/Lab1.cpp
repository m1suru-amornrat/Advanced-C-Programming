#include <iostream>

using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) 
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base = 2, exponent = 10;

    cout << base << " ^ " << exponent << " is " << power(base, exponent) << endl;
    return 0;           
}