#include <stdio.h>

int main()
{
	printf("Welcome to Rectangle Area Calculator\n");
	printf("Please use dot (.) for fractions\n");
	float x,y,area;
	printf("Please enter value of the first side: ");
	scanf("%f",&x);
	printf("Please enter value of the second side: ");
	scanf("%f",&y);
	area = x*y;
	printf("Area of the rectangle is: %f\n",area);
	printf("Thank you for using Rectangle Area Calcualtor\n -Serhet Gokdemir");
	return 0;
}
