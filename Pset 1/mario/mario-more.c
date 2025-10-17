#include <stdio.h>
int main(void)
{
	printf("Height:");
	int Height;
	while (1)
	{
		scanf_s("%d", &Height);
		if (Height >= 0&&Height<=8)
		{
			break;
		}
		else
		{
			printf("Invalid input. Please enter a positive integer between 1 and 8\nHeight:");
		}
	}
	for (int n = 1;n <= Height;n++)
	{
		for (int a = 0;a < Height - n;a++)
		{
			printf(" ");
		}
		for (int bricks = 1;bricks <= n;bricks++)
		{
			printf("#");
		}
		printf(" ");
		for (int bricks = 1;bricks <= n;bricks++)
		{
			printf("#");
		}
		printf("\n");
	}
}
