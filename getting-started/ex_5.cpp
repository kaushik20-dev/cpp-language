/*
Here is a "magic number" problem: 
Ask a user to enter a three-digit number whose first digit is greater than its last.
Your program will reverse the number, and subtract the reversal from the original number.
Finally, reverse the resulting number, and add it to its unreversed form. 
Output the final result. The original number that the user enters must be of integer type.
Think about how to write a function that takes an integer as input and returns the reverse of that number.

Example:

input number: 901
reverse it: 109
subtract: 901 - 109 = 792
reverse it: 297
add: 297 + 792 = 1089
*/

#include <iostream>
using namespace std;

int reverse(int num) {
    int remainder, rev_num=0;
    while (num != 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num /= 10;
    }
    return rev_num;
}

int main() {
    int num, rev, sub, add, result;
    cout << "input number: " << endl;
    cin >> num;

    if ((num >= 100) && (num <= 999)) {
        rev = reverse(num);
        cout << "reverse it: " << rev << endl;
        sub = num - rev;
        cout << "subtract: " << sub << endl;
        rev = reverse(sub);
        cout << "reverse it: " << rev << endl;
        add = sub + rev;
        cout << "add: " << add << endl;
    }

    else {
        cout << "entered number is not a three digit number" << endl;
    }

    return 0;
}
