#include<stdio.h>

void Skyscrapers()
{
	int h, c = 0, count = 0;
	printf("Enter Height Skyscrapers\n");

	do 
	{
		scanf_s("%d", &h);

		if (h == 0 || h < -1)
			printf("Wrong Height\nTry again !!!\n");
		
		else 
		{
			if (h - c > 0)
				count++;

			if (h > c)
				c = h;
		}

	} while (h != -1);

	printf("\nI can see %d skyscrapers\n", count);
}

int main()
{
	Skyscrapers();
	return 0;
}