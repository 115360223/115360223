#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void){
int a, b, c;
printf("Please enter three integers: ");
scanf("%d %d %d",&a,&b,&c);
int Min, Max;
Min = a;Max = a;
if (b > Max){
	Max = b;
}
if (b < Min) {
	Min = b;
}

if (c > Max) {
	Max = c;
}
if (c < Min) {
	Min =c;
}
printf("The largest integer is %d.\n", Max);
printf("The smallest integer is %d.\n", Min);
return 0;
}
