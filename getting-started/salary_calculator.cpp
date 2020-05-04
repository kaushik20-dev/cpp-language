// Description: Compensation picker
/*
Pick compensation option at a company.
Method-1: Straight salary of $600 per week;
Method-2: A salary of $7.00 per hour plus a 10% commision on sales
Method-3: No salary,but 20% commisions and 20% for each pair of shoes sold
*/

#include <iostream>
using namespace std;

#define kPricePerunit 225 // average price of a pair of shoes
#define kWeeklyWage 600 // current weekly wage Method 1
#define kSalary 7.0 // hourly salary - Method 2
#define kHoursPerWeek 40 // number of hours worked - Method 2
#define kCommission2 0.10 // commission - Method 2
#define kCommission3 0.2 // commision - Method 3
#define kBonusPerUnit 20 // bonus - Method 3

int GetInput() {
    int units;
    cout << "Enter the number of units sold per week: " << endl;
    if (!(cin >> units)) {
        cout << "Numbers only" << endl;
        return 0;
    } else {
        return units;
    }
}

// Method1 - always the same: $600 per week
void CalcMethod1() {
    cout << "Method 1: " << kWeeklyWage << endl;
}

// Method2 - calculate salary hourly basis + commission
void CalcMethod2(int Sales) {
    double PerHour, TotalPay, Commission;
    PerHour = kSalary * kHoursPerWeek;
    Commission = kCommission2 * (Sales * kPricePerunit);
    TotalPay = PerHour + Commission;
    cout << "Method 2: " << TotalPay << endl;
}

// Method3 - calculate No salary but 20% commissions and 20% for each pair of shoes sold 
void CalcMethod3(int Sales) {
    int Extra;
    double TotalPay, Commission;

    Extra = kBonusPerUnit * Sales;
    Commission = (Sales * kPricePerunit) * kCommission3;
    TotalPay = Extra + Commission;
    cout << "Method 3: " << TotalPay << endl;
}

int main() {
int WeeklySales; 

WeeklySales = GetInput();
if (WeeklySales == 0) {
    return 0;
}
CalcMethod1();
CalcMethod2(WeeklySales);
CalcMethod3(WeeklySales);
}