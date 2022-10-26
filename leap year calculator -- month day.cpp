#include <stdio.h>

int main()
{
	
	int year,month;
	int yearZ,yearT,yearP;
	
	printf("Please enter a year: ");
	scanf("%d",&year);
	
	printf("Please enter a month number between 1-12: ");
	scanf("%d",&month);
	
	yearZ = year%4;
	yearT = year%100;
	yearP = year%400;
	
	if (month >= 1 && month <= 12)
	{
	switch(yearZ,yearT,yearP)
		{
			case 0:
				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				{
					printf("This is a leap year. And this month takes 31 days.");
				}
				else if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					printf("This is a leap year. And this month takes 30 days.");
				}
				else
				{
					printf("This is a leap year. And this month takes 29 days");
				}
				break;
			
			default:
				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				{
					printf("This is not a leap year. And this month takes 31 days.");
				}
				else if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					printf("This is not a leap year. And this month takes 30 days.");
				}
				else
				{
					printf("This is not a leap year. And this month takes 28 days");
				}
				break;
				
	}
	}
	else
	{
		printf("It's a invalid month number.");
	}		
	return 0;
	
	
}
