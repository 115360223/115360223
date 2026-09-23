#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float w = 0.0;
	float h = 0.0;
	float BMI = 0.0;
	printf("Enter your height in inches:");
	scanf_s("%f", &h);
	printf("Enter your weight in pounds:");
	scanf_s("%f", &w);
	BMI = (w * 703) / (h * h);
	printf("Your BMI=%f\n", BMI);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");
	return 0;
}