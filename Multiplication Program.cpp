#include<stdio.h>
#include<conio.h>
int main()
{
	int in,out,ans,b,n;
	char ask[] = "Answer(number)";

	printf("Start Program?\t1.Yes\t2.No\t%s : ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t       *Multiplication Calculation Program*\n\t\t\t\t   Ver.2.0.0");
		printf("\nInput Number : ");
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
		printf("\nTry again?\t1.Yes\t2.No\t%s : ", ask);
		scanf_s("%d", &b);
		if (b == 2)
		{
			break;
		}
	}
	return 0;
}