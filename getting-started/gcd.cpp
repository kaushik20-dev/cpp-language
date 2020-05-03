// Description: compute gcd of two integers - non-recursive  

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    if (!(cin >> x >> y)) {
        cout << "Please enter only integers" << endl;
    } else {
        cout << "gcd of " << x << " and " << y << " is: " << gcd(x, y) << endl;
    }
    return 0;
}