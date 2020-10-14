#pragma once
void printResullt(int bool, float x1, float x2) {
	if (bool == 1) {
		printf("The first root is %03f, the second root is %03f\n", x1, x2);
	}
	else if (bool == 0) {
		printf("The root is %03f\n", x1);
	}
	else {
		float i1 = x2, i2 = x2,x3=x1;
		printf("The first root is %03f + %03f * i, the second root is %03f - %03f * i\n", x1, i1, x3, i2);
	}
}
