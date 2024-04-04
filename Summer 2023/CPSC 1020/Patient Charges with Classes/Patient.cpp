// My Name: Kaylee Pierce
// My Class: CPSC 1021
// Date: 06/19/2023
// Desc: This file contains the definitions
// for the Patient class
// Time: 1 hour

#include "Patient.h"

using namespace std;

Patient::Patient(int days, double rate, double services, double medication, char patinetType)
: days(0), rate(0), services(0), medication(0), patientType('I') {
  setDays(days);
  setRate(rate);
  setServices(services);
  setMedication(medication);
  setPatientType(patientType);
}

Patient::Patient(char patientType, double services, double medication) : patientType(patientType) {
	setPatientType(patientType);
	setServices(services);
	setMedication(medication);
}

bool Patient::validateInput(int v) {
  if(v >= 0) {
    return true;
  } else {
    return false;
  }
}

bool Patient::validateInput(double v) {
  if(v >= 0) {
    return true;
  } else {
    return false;
  }
}

void Patient::setDays(int d) {
  if(validateInput(d)) {
    days = d;
  } else {
    days = 0;
  }
}

int Patient::getDays() {
  return days;
}

void Patient::setRate(double r) {
  if(validateInput(r)){
    rate = r;
  } else {
    rate = 0.00;
  }
}

double Patient::getRate() {
  return rate;
}

void Patient::setServices(double s) {
  if(validateInput(s)) {
    services = s;
  } else {
    services = 0;
  }
}

double Patient::getServices() {
  return services;
}

void Patient::setMedication(double m) {
  if(validateInput(m)) {
    medication = m;
  } else {
    medication = 0;
  }
}

double Patient::getMedication() {
  return medication;
}

void Patient::setPatientType(char p) {
  if(p == 'I' || p == 'i' || p == 'O' || p == 'o') {
    patientType = p;
  } else {
    patientType = 'I';
  }
}

char Patient::getPatientType() {
  return patientType;
}

double Patient::calcTotalCharges() {
  if(patientType == 'I' || patientType == 'i') {
    return (days * rate) + services + medication;
  } else {
    return services + medication;
  }
}
