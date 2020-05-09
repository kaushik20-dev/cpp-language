/*
As electronics stopwatches become cheaper and more accurate, we 
will no doubt be deluged with impossibly accurate measurements of time. 
Write a program that takes as input a time period given in seconds, 
and outputs the number of hours, minutes and seconds it represents.

Example run:
Number of seconds: 3662
Hours: 1
Minutes: 1
Seconds: 2
*/

#include <iostream>
using namespace std;

int main() {
    int time = 0, hrs = 0, mins = 0, secs;
    cout << "Number of seconds: ";

    cin >> secs;
    hrs = secs / 3600;
    time = secs % 3600;
    mins = time / 60;
    time = time % 60;
    secs = time;
    
    cout << "Hours: " << hrs << endl;
    cout << "Minutes: " << mins << endl;
    cout << "Seconds: " << secs << endl;
    return 0;
}

