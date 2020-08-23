#include<stdio.h>
#include<conio.h>
int main()
{
	int c, ex,b;	
	float m,us,yen,baht;
	char ask[] = "Answer(number)";
	
	printf("Start Program?\t1.Yes\t2.No\t%s : ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t\t    *Exchange Currency Program*\n\t\t\t\t      v.1.0.0");
		printf("\n***Choose your currency***\n\t1.Baht\t2.US Dollar\t3.Yen\n\nAnswer(number) : ");
		scanf_s("%d", &c);
		printf("\n***Choose currency to exchange***");

		if (c == 1)
		{
			printf("\n\t1.US Dollar\t2.Yen");
		}
		if (c == 2)
		{
			printf("\n\t1.Baht\t2.Yen");
		}
		if (c == 3)
		{
			printf("\n\t1.Baht\t2.US Dollar");
		}

		printf("\n\n%s : ",ask);
		scanf_s("%d", &ex);

		printf("\nEnter your money to exchange : ");
		scanf_s("%f", &m);
//Baht to...
		if (c == 1)
		{
			if (ex == 1)
			{
				us = m * 0.032;
			}

			if (ex == 2)
			{
				yen = m * 3.42;
			}
		}
//US Dollar to...
		if (c == 2)
		{
			if (ex == 1)
			{
				baht = m * 31.10;
			}

			if (ex == 2)
			{
				yen = m * 106.52;
			}
		}
//Yen to...
		if (c == 3)
		{
			if (ex == 1)
			{
				baht = m * 0.29;
			}

			if (ex == 2)
			{
				us = m * 0.0094;
			}
		}
//Total Exchange
		if ((c == 1 && ex == 1) || (c == 3 && ex == 2))
		{
			printf("%f US Dollar\n", us);
		}

		if ((c == 1 && ex == 2) || (c == 2 && ex == 2))
		{
			printf("%f Yen\n", yen);
		}

		if ((c == 2 && ex == 1) || (c == 3 && ex == 1))
		{
			printf("%f Baht\n", baht);
		}

		printf("\nTry again?\t1.Yes\t2.No\t%s : ", ask);
		scanf_s("%d", &b);
		if (b == 2)
		{
			break;
		}
	}
	printf("\n*********************************** Thank you **********************************\n");
	return 0;
}