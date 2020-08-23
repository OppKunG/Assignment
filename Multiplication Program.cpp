#include<stdio.h>
#include<conio.h>
int main()
{
	int in1,in2,out,ans;
	printf("--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t       *Multiplication Calculation Program*\n\t\t\t\t   Ver.Beta");
	printf("\nInput Number : ");
	scanf_s("%d %d",&in1,&in2);
	ans = in1 * in2;
	printf("\n");
	for (int i = 1; i <= 12;i++) {
		out = ans * i;
		printf("%d * %d = %d\n",ans,i,out);
	}
	return 0;
}