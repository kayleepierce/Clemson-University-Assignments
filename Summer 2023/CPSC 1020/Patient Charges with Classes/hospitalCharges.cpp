// My Name: Kaylee Pierce
// My Class: CPSC 1021
// Date: 06/19/2023
// Desc: This file take in user input to determine
// in-patient or out-patient charges
// Time: 1 hour

#include <iostream>
#include <iomanip>
#include "Patient.h"

using namespace std;

int main()
{

  char patientType;
  int days;
  double rate, services, medication;

  cout << "This program will calculate a patient's hospital charges" << endl;
  cout << "Enter I for in-patient or O for out-patient: ";
  cin >> patientType;

  if (patientType == 'I' || patientType == 'i') {
    cout << "Number of days in the hospital: ";
    cin >> days;

    cout << "Daily room rate ($): ";
    cin >> rate;

    cout << "Lab fees and other service charges ($): ";
    cin >> services;

    cout << "Medication charges ($): ";
    cin >> medication;

    Patient patient(days, rate, services, medication, patientType);

    cout << "Your total hospital bills is $" << fixed << setprecision(2) << patient.calcTotalCharges() << endl;

  } else if (patientType == 'O' || patientType == 'o') {
    cout << "Lab fees and other service charges ($): ";
    cin >> services;

    cout << "Medication charges ($): ";
    cin >> medication;

    Patient patient(patientType, services, medication);

    cout << "Your total hospital bills is $" << fixed << setprecision(2) << patient.calcTotalCharges() << endl;
  } else {
    cout << "Invalid input" << endl;
  }

  return 0;
}
