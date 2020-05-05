// file_op.cpp
// Description: An illustration of file processing
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char first_name[30], last_name[30]; int age;
    char file_name[20];
    // Collect the data
    cout << "Enter the First name: "; cin >> first_name;
    cout << "Enter the Last name: "; cin >> last_name;
    cout << "Enter Age: "; cin >> age;
    cout << endl << "Enter the name of the file: "; cin >> file_name;

    // Create an ofstream called People, open the stream for output.
    ofstream People(file_name, ios::out);
    // Write the output to the stream.
    People << first_name << endl << last_name << endl << age << endl; 
    // Close the stream
    People.close();
    
    // Create an ifstream to read the filename
    ifstream People_in(file_name);
    People_in >> first_name >> last_name >> age;

    cout << endl << "First Name: " << first_name;
    cout << endl << "Last Name: " << last_name;
    cout << endl << "Enter Age: " << age;
    cout << endl;

    // Close the stream.
    People_in.close();

    return 0;
    
}