// My Name: Kaylee Pierce
// My Class: CPSC 1021
// Date: 05/30/2023
// Desc: This program take in user input to
// calculate retirement savings amount
// Time: 30 minutes

#include <iostream>
#include "compoundCalc.h"

using namespace std;

int main ()
{
	int years;
	double principle, interest;

	cout << "Enter your principle / present value amount: ";
	cin >> principle;

	cout << "Enter your interest rate as a decimal: ";
	cin >> interest;

	cout << "Enter the number of years the money will be left in account: ";
	cin >> years;

	double retirementSavings = compoundCalc(principle, interest, years);

	cout << "Your retirement savings will be $" << retirementSavings << endl;

	return 0;
}
