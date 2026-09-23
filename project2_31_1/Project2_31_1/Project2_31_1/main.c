#include<stdio.h>
#include<stdlib.h>
int main() {
	double weight, height, bmi;
	printf("Enter your weight(in kilograms):");
	scanf_s("%lf", &weight);
	printf("Enter your height(in meter):");
	scanf_s("%lf", &height);
	bmi = weight / height / height;
	printf("Your BMI is %lf\n", bmi);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n ");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");
	return 0;
}