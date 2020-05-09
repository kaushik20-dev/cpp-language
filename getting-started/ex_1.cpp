/*
Exercise - 1:
The common field cricket chirps in direct proportion to the current
temperature. Adding 40 to the number of time a cricket chirps in a
minute, then dividing that value by 4 gives us the temperature.
Write a program that takes as input the number of chirps in a 
minute and prints the current temperature.

Ex: Number of chirps: 120
The temperature is: 40.0 degrees.
*/
#include <iostream>
using namespace std;

#define kCHIRPS 40

int main() {
    int chirps;
    float temperature;
    cout << "Enter the number of chirps in a minute : ";
    cin >> chirps;
    temperature = (chirps + kCHIRPS)/4;
    cout << "The temperature is : " << temperature;
    return 0;
}
