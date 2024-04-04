// My Name: Kaylee Pierce
// My Class: CPSC 1021
// Date: 05/29/2023
// Desc: This program takes in user input
// to calculate the area of an object
// Time: 30 minutes

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;

	int menuChoice;
	double squareSide, circleRadius, triBase, triHeight, area;

	cout << "Program to calculate areas of objects" << endl;
	cout << "1 -- square" << endl;
	cout << "2 -- circle" << endl;
	cout << "3 -- right triangle" << endl;
	cout << "4 -- quit" << endl;

	cin >> menuChoice;

	if (menuChoice == 1) 
	{
		cout << "You chose SQUARE. Enter the length of the side: ";
		cin >> squareSide;
		area = squareSide * squareSide;
		cout << "Area = " << fixed << setprecision(2) << area << endl;
	} else if (menuChoice == 2)
	{
		cout << "You chose CIRCLE. Enter the radius: ";
		cin >> circleRadius;
		area = PI * pow(circleRadius, 2);
		cout << "Area = " << fixed << setprecision(2) << area << endl;
	} else if (menuChoice == 3)
	{
		cout << "You chose RIGHT TRIANGLE. Enter the base, followed by the height: ";
		cin >> triBase >> triHeight;
		area = (triBase * triHeight) / 2;
		cout << "Area = "<< fixed << setprecision(2) << area << endl;
	} else if (menuChoice == 4)
	{
		cout << "Good bye!" << endl;
	} else 
	{
		cout << "You entered an invalid choice. Good bye!" << endl;
	}

	return 0;
}
