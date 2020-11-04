#include<stdio.h>

void PrimeNumber()
{
	int in,d=2;
	printf("Input : ");
	scanf_s("%d",&in);

	if (in == 0)
		printf("Invalid Number\n");

	else if (in == 1)
		printf("Wrong\n");

	else
		while (in != 1)
		{
			while (in % d == 0)
			{
				printf("%d\n", d);
				in /= d;
			}
			d++;
		}
}

int main()
{
	PrimeNumber();
	return 0;
}