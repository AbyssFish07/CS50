#include <stdio.h>
int main(void)
{
	int money, quarters,dimes,nickels,pennies;
	//quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)
	do
	{
		printf("Change owed:");
		scanf_s("%d", &money);
	} 
	while (money <= 0);
	quarters = money / 25;
	dimes = money % 25 / 10;
	nickels = money % 25 % 10 / 5;
	pennies = money % 25 % 10 % 5;
	int sum = quarters + dimes + nickels + pennies;
	printf("%d", sum);
}
