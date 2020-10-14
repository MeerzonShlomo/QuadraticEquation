#define __STDC_WANT_LIB_EXT1__ 1
//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include "Discriminant.h"
#include "Show.h"


int main() {
	printf("This is the Quadratic Equation calculator!\n");
	printf("For ax^2+bx+c calculation ->\n");
	float ax = 0.0, bx = 0.0, c = 0.0;
	printf("Enter ax parametr\n");
	if (ax == 0.0) { 
		scanf(" %f", &ax);
	}
	printf("Enter bx parametr\n");
	if (bx == 0) {
		scanf(" %f", &bx);
	}

	printf("Enter c parametr\n");
	if (c == 0) {
		scanf(" %f", &c);
	}

	printf("You entered %f * x^2 + %f * x + %f\n", ax, bx, c);

	float discriminant = discriminant_Calculation(ax, bx, c);


	if (discriminant>0)
	{
		float x1 = (float)(sqrt(discriminant) - bx) / 2;
		float x2 = (float)((-1.0)*sqrt(discriminant) - bx) / 2;
		printResullt(1, x1, x2);
	}
	else if(discriminant == 0){
		printResullt(0, -bx / 2, 0 / 2);
	}
	else if(discriminant<0) {
		printResullt(-1, -bx / 2, sqrt(-discriminant) / 2);
	}
		return 0;
}