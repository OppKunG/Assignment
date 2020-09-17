#include<stdio.h>

char ask[] = "Answer(number) :",In[] = "Input Number :";

void Intro(void);
void Interface(void);

int main()
{
	int b;
	printf("Start Program?\t1.Yes\t2.No\t%s ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		Intro();
		Interface();
		
		printf("\nTry again?\t1.Yes\t2.No\t%s ", ask);
		scanf_s("%d", &b);

		if (b == 2)	break;
	}
	return 0;
}

// GUI
void Intro()
{
	printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t       *Multiplication Calculation Program*\n\t\t\t\t   ver.Beta");
}

void Interface()
{
	void Basic_Multiplication(void);
	void Factorial(void);

	int p;

	printf("\n\n\t\t1.Basic Multiplication\t2.Factorial\n\n%s ", ask);
	scanf_s("%d", &p);

	if (p == 1)	Basic_Multiplication();

	if (p == 2)	Factorial();
}


// Progress
void Basic_Multiplication()
{
	int in, n, out;

	printf("\n%s ", In);
	scanf_s("%d", &in);
	printf("\nMultiplication Until : ");
	scanf_s("%d", &n);
	if (in == 1 || in == 0)
	{
		printf("\nYou will do it yourself !!!\n");
	}
	else
	{
		printf("\n");
		for (int i = 1; i <= n; i++)
		{
			out = in * i;
			printf("%d * %d = %d\n", in, i, out);
		}
	}
}

void Factorial()
{
	int in, c;

	printf("\n%s ", In);
	scanf_s("%d", &in);
	if (in == 1 || in == 0)
	{
		printf("%d! = 1\n", in);
	}
	if (in > 1)
	{
		printf("\n");
		c = 1;
		for (int i = 1; i <= in; i++)
		{
			c = c * i;
		}
		printf("%d! = %d\n", in, c);
	}
}