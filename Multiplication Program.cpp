#include<stdio.h>
#include<conio.h>
int main()
{
	int in1,in2,out,ans,b;
	char ask[] = "Answer(number)";

	printf("Start Program?\t1.Yes\t2.No\t%s : ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t       *Multiplication Calculation Program*\n\t\t\t\t   Ver.1.0.0");
		printf("\nInput Number : ");
		scanf_s("%d %d", &in1, &in2);
		ans = in1 * in2;
		printf("\n");
		for (int i = 1; i <= 12; i++) {
			out = ans * i;
			printf("%d * %d = %d\n", ans, i, out);
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