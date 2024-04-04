// My Name: Kaylee Pierce
// My Class: CPSC 1021
// Date: 05/30/2023
// Desc: This file contains the compoundCalc function
// Time: 5 minutes

#include "compoundCalc.h"
#include <cmath>

double compoundCalc(double principle, double interest, int years)
{
	return principle * pow(1 + interest, years);
}
