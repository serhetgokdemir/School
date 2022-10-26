
#include <stdio.h>

/*

Write a C program to count total number of notes in given amount.

*/

int main()
{
	printf("Welcome to X-Bank.\n");
	int money;
	int bnote500,bnote200,bnote100,bnote50,bnote20,bnote10,bnote5,bnote1;
	
	bnote500=bnote200=bnote100=bnote50=bnote20=bnote10=bnote5=bnote1 = 0 ;
	
	printf("Please enter the amount that you want without fraction: ");
	scanf("%d",&money);
	
	if (money >= 500)
	{
		bnote500 = money/500;
		money = money-(bnote500*500);
	}
	if (money >= 200)
	{
		bnote200 = money/200;
		money = money-(bnote200*200);
	}
	if (money >= 100)
	{
		bnote100 = money/100;
		money = money-(bnote100*100);
	}
	if (money >= 50)
	{
		bnote50 = money/50;
		money = money-(bnote50*50);
	}
	if (money >= 20)
	{
		bnote20 = money/20;
		money = money-(bnote20*20);
	}
	if (money >= 10)
	{
		bnote10 = money/10;
		money = money-(bnote10*10);
	}
	if (money >= 5)
	{
		bnote5 = money/5;
		money = money-(bnote5*5);
	}
	if (money >= 1)
	{
		bnote1 = money;
		money = money-(bnote1);
	}
	printf("The money is ready. It's:\n%d 500'luk\n%d 200'luk\n%d 100'luk\n%d 50'lik\n",bnote500,bnote200,bnote100,bnote50);
	printf("%d 20'lik\n%d 10'luk\n%d 5'lik\n%d 1'lik",bnote20,bnote10,bnote5,bnote1);
	
	
	
	
	
	
}
