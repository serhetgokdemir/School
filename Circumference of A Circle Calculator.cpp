#include <stdio.h>

int main()
{
	int radius;
	float Pi,result;
	Pi=3.14;
	printf("Welcome to Circle Circumference Calculator\n");
	printf("Please enter the radius length (integer): ");
	scanf("%d",&radius);
	result= 2*Pi*radius;
	printf("--The Circumference is Calculating--\n");
	printf("The Circumference is: %f",result);
	return 0;
}
