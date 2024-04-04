// My Name: Kaylee Pierce
// My Class: CPSC 1021
// Date: 06/19/2023
// Desc: This file contains the Patient Class
// declarations
// Time: 30 minutes

#include <iostream>
using namespace std;

#ifndef PATIENT_H
#define PATIENT_H

class Patient {
private:
  int days = 0;
  double rate = 0;
  double services = 0;
  double medication = 0;
  char patientType = 'I';
  bool validateInput(double v);
  bool validateInput(int v);

public:
	Patient() = default;
  	Patient(int days, double rate, double services, double medication, char patientType);
	Patient(char patientType, double services, double medication);

	void setDays(int d);
	int getDays();
	void setRate(double r);
	double getRate();
	void setServices(double s);
	double getServices();
	void setMedication(double m);
	double getMedication();
	void setPatientType(char p);
	char getPatientType();
	double calcTotalCharges();
};

#endif
