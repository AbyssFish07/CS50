#include <stdio.h>
int main(void)
{
	printf("Height:");
	int Height;
	while (1)
	{
		scanf_s("%d", &Height);
		if (Height >= 0)
		{
			break;
		}
		else
		{
		printf("Invalid input. Please enter a non-negative integer.\nHeight:");
		}
	}
	for (int n=1;n<=Height;n++)
	{
		for (int a = 0;a < Height - n;a++)
		{
			printf(" ");
		}
		for (int star = 1;star <= n;star++)
		{
			printf("*");
		}
		printf("\n");
	}
}