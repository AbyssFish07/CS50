#include <stdio.h>
int main(void)
{
	char name[50];
	printf("What's your name?");
	scanf_s("%49s", name,50);
	printf("Hello,%s", name);
	return 0;
}
