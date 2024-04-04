/*
	Kaylee Pierce
	CPSC 1011 Spring 2023
	Section 002
	Lab 4
	This program makes two arrays to calculate the second highest of each
	and the inner product.
*/

#include<stdio.h>
#include<stdlib.h>

int inner_product(int array1[], int array2[], int length);

int main() {

  int array1[20];
  printf("Enter 20 integers: ");
  for(int i=0; i<20; ++i) {
     scanf("%d", &array1[i]);
  }

  printf("\narray1: \n");
  for(int i=0; i<20; ++i) {
     printf("%d\n", array1[i]);
  }


  int array2[20], i;
	for(i=0; i<20; i++) {
		array2[i] = (rand() % 50 +1);
	}
	printf("\narray2: \n");
	for(i=0; i<20; i++) {
		printf("%d\n", array2[i]);
	}


	int max1, max2;
	max1 = max2 = array1[0];
	
	for(i=1; i<20; i++) {
		if (max1 < array1[i]) {
			max2 = max1;
			max1 = array1[i];
		}else if(max2 < array1[i] && array1[i] != max1) {
			max2 = array1[i];
		}
	}

	int max_1, max_2;
	max_1 = max_2 = array2[0];

	for (i = 1; i < 20; i++) {
		if (max_1 < array2[i]) {
			max_2 = max_1;
			max_1 = array2[i];
		}else if(max_2 < array2[i] && array2[i] != max_1) {
			max_2 = array2[i];
		}
	} 


	int result = inner_product(array1, array2, 20);

	printf("\nsecond highest from array1 is: %d \n", max2);
	printf("second highest from array2 is: %d \n", max_2);
	printf("inner product is: %d\n", result);
	

	return 0;
}

int inner_product(int array1[], int  array2[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum = sum + (array1[i] * array2[i]);
	return sum;
	}
