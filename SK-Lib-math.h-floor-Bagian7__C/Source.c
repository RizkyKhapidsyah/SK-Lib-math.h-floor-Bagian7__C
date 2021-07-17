
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
	double y;

	y = floor(2.8);
	printf("The floor of 2.8 is %f\n", y);
	y = floor(-2.8);
	printf("The floor of -2.8 is %f\n", y);

	y = ceil(2.8);
	printf("The ceil of 2.8 is %f\n", y);
	y = ceil(-2.8);
	printf("The ceil of -2.8 is %f\n", y);

	_getch();
	return 0;
}