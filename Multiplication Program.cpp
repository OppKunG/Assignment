#include<stdio.h>
#include<conio.h>
int main()
{
	int in,out,ans,b,n,p,c=1;
	char ask[] = "Answer(number) :",In[] = "Input Number :";

	printf("Start Program?\t1.Yes\t2.No\t%s ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t       *Multiplication Calculation Program*\n\t\t\t\t   Ver.3.5.0");
		printf("\n\n\t\t1.Basic Multiplication\t2.Factorial\n\n%s ", ask);
		scanf_s("%d", &p);

		//Basic Multiplication
		if (p == 1)
		{
			printf("\n%s ",In);
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

		//Factorial
		if (p == 2)
		{
			printf("\n%s ",In);
			scanf_s("%d", &in);
			if (in == 1 || in == 0)
			{
				printf("%d! = 1\n", in);
			}
			if(in > 1)
			{
				printf("\n");
				c = 1;
				for (int i = 1; i<=in; i++)
				{
					c = c * i;
				}
				printf("%d! = %d\n", in, c);
			}
		}

		printf("\nTry again?\t1.Yes\t2.No\t%s ", ask);
		scanf_s("%d", &b);
		if (b == 2)
		{
			break;
		}
	}
	return 0;
}
