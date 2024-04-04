/* Kaylee Pierce
	CPSC 101 Lab, Spring 2023
	Lab #3
	02/07/2023
	CPSC 1011-002
	Program that determines the Category of a hurricane based on wind speed 
*/

#include <stdio.h>

int main(void) {
char  num;
int windspeed, loop;

	while(1) {
	printf("\n Enter a character: ");
	fscanf(stdin, " %c", &num);
	printf("\n The decimal representation of your character %c is %d. \n", num, num);


	windspeed = num * 2;
	//printf("\n %d \n", windspeed);
	//printf("\n %c \n", windspeed);
	printf("\n Would (2 * '%c') be a hurricane?? \n", num);
	printf("\n (2 * '%c') = %d \n", num, windspeed);

	if(windspeed < 74) {
		printf("\n Wind speed of %d is not strong enough to be a hurricane. \n", windspeed);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");}
	else if((windspeed >= 74) && (windspeed <= 95)) {
		printf("\n Wind speed of %d is a Category 1 hurricane. \n", windspeed);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");}
	else if((windspeed >= 96) && (windspeed <= 110)) {
		printf("\n Wind speed of %d is a Category 2 hurricane. \n", windspeed);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");}	
	else if((windspeed >= 111) && (windspeed <= 130)) {
		printf("\n Wind speed of %d is a Category 3 hurricane. \n", windspeed);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");}
	else if((windspeed >= 131) && (windspeed <= 155)) {
		printf("\n Wind speed of %d is a Category 4 hurricane. \n", windspeed);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");}
	else if(windspeed >= 155) {
		printf("\n Wind speed of %d is a Category 5 hurricane. \n", windspeed);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");}

	while(1) {

	printf("\n Enter 1 to go again or 0 to quit: " );
	scanf("%d", &loop);
	if(loop==0 || loop==1)
		break;
	}
	if(loop==0)
		break;
	}	
			 
	return 0;
}
