/*
Write a program that will compute your final grade for a programming
course you are taking. Here is the grading scheme:
Your program should ask the user for the four assignment scores,
the midterm, final and section grades. Then, the final score is
calculated and printed.
To do the calculations, you average the
four assignment scores together and then multiply it by 0.4 (40%).
You then multiply the midterm score by 0.15, the final by 0.35
and the participation grade by 0.1. Then you add all the results
of these multiplications together.

Ex Run:
Enter the score for the first assignment. 75
Enter the score for the second assignment. 85
Enter the score for the third assignment. 82
Enter the score for the fourth assignment. 94
Enter the score for the midterm. 81
Enter the score for the final. 89
Enter the score for the section grade. 100
The final grade is: 86.9
*/

#include <iostream>
using namespace std;

float calculate_grade(int first_a, int second_a, int third_a, int fourth_a, int midterm_grade, int final_grade, int section_grade) {
    float assignment_result, other_result;
    assignment_result = ((first_a + second_a + third_a + fourth_a) / 4) * 0.4;
    other_result = (midterm_grade * 0.15) + (final_grade * 0.35) + (section_grade * 0.1);
    return assignment_result + other_result;
}

int main() {
    int first_a, second_a, third_a, fourth_a, midterm_grade, final_grade, section_grade;
    float result_grade; 

    cout << "Enter the score for the first assignment. " << endl;
    cin >> first_a;
    cout << "Enter the score for the second assignment. " << endl;
    cin >> second_a;
    cout << "Enter the score for the third assignment. " << endl;
    cin >> third_a;
    cout << "Enter the score for the fourth assignment. " << endl;
    cin >> fourth_a;
    cout << "Enter the score for the midterm. " << endl;
    cin >> midterm_grade;
    cout << "Enter the score for the final. " << endl;
    cin >> final_grade;
    cout << "Enter the score for the section grade. " << endl;
    cin >> section_grade;

    result_grade = calculate_grade(first_a, second_a, third_a, fourth_a, midterm_grade, final_grade, section_grade);
    cout << "The final grade is: " << result_grade;
    
    return 0;
}