#include<stdio.h>

int main()
{
	int c, ex, b;
	float m, us, yen, baht, won;
	char total[] = "Total Exchange :",ask[] = "Answer(number) :", B[] = "Baht", US[] = "US Dollar", Y[] = "Yen", W[] = "Won";

	printf("Start Program?\t1.Yes\t2.No\t%s ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t\t    *Exchange Currency Program*\n\t\t\t\t      v.3.5.0");
		printf("\n***Choose your currency***\n\t1.%s\t2.%s\t3.%s\t4.%s\n\n%s ", B, US, Y, W, ask);
		scanf_s("%d", &c);
		printf("\n***Choose currency to exchange***");

		if (c == 1)
		{
			printf("\n\t1.%s\t2.%s\t3.%s", US, Y, W);
		}
		if (c == 2)
		{
			printf("\n\t1.%s\t2.%s\t3.%s", B, Y, W);
		}
		if (c == 3)
		{
			printf("\n\t1.%s\t2.%s\t3.%s", B, US, W);
		}
		if (c == 4)
		{
			printf("\n\t1.%s\t2.%s\t3.%s", B, US, Y);
		}

		printf("\n\n%s ", ask);
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

			if (ex == 3)
			{
				won = m * 37.95;
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

			if (ex == 3)
			{
				won = m * 1180.61;
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

			if (ex == 3)
			{
				won = m * 11.21;
			}
		}

		//Won to...
		if (c == 4)
		{
			if (ex == 1)
			{
				baht = m * 0.026;
			}

			if (ex == 2)
			{
				us = m * 0.00085;
			}

			if (ex == 3)
			{
				yen = m * 0.089;
			}
		}

		//Total Exchange
		if ((c == 1 && ex == 1) || (c == 3 && ex == 2) || (c == 4 && ex == 2))
		{
			printf("\n%s %f %s\n", total,us, US);
		}

		if ((c == 1 && ex == 2) || (c == 2 && ex == 2) || (c == 4 && ex == 3))
		{
			printf("\n%s %f %s\n", total,yen, Y);
		}

		if ((c == 2 && ex == 1) || (c == 3 && ex == 1) || (c == 4 && ex == 1))
		{
			printf("\n%s %f %s\n", total,baht, B);
		}

		if ((c == 1 && ex == 3) || (c == 2 && ex == 3) || (c == 3 && ex == 3))
		{
			printf("\n%s %f %s\n", total,won, W);
		}

		printf("\nTry again?\t1.Yes\t2.No\t%s ", ask);
		scanf_s("%d", &b);
		if (b == 2)
		{
			break;
		}
	}

	printf("\n*********************************** Thank you **********************************\n");
	return 0;
}