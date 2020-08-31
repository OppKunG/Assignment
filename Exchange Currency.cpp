#include<stdio.h>

int main()
{
	int c, ex, b;
	float m, us, yen, baht, won, pound;
	char	total[] = "Total Exchange :",ask[] = "Answer(number) :", 
				B[] = "Baht", US[] = "US Dollar", Y[] = "Yen", W[] = "Won",P[] = "Pound Sterling";

	printf("Start Program?\t1.Yes\t2.No\t%s ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t\t    *Exchange Currency Program*\n\t\t\t\t      Ver.4.0.0\n\t\t\t\t\t\t\t(Latest Update 31/08/20)");
		printf("\n\n***Choose your currency***\n\t1.%s\t2.%s\t3.%s\t4.%s\t5.%s\n\n%s ", B, US, Y, W, P, ask);
		scanf_s("%d", &c);
		printf("\n***Choose currency to exchange***");

		if (c == 1)
		{
			printf("\n\t1.%s\t2.%s\t3.%s\t4.%s", US, Y, W, P);
		}
		if (c == 2)
		{
			printf("\n\t1.%s\t2.%s\t3.%s\t4.%s", B, Y, W, P);
		}
		if (c == 3)
		{
			printf("\n\t1.%s\t2.%s\t3.%s\t4.%s", B, US, W, P);
		}
		if (c == 4)
		{
			printf("\n\t1.%s\t2.%s\t3.%s\t4.%s", B, US, Y, P);
		}
		if (c == 5)
		{
			printf("\n\t1.%s\t2.%s\t3.%s\t4.%s", B, US, Y, W);
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
				yen = m * 3.41;
			}

			if (ex == 3)
			{
				won = m * 38.2;
			}

			if (ex == 4)
			{
				pound = m * 0.024;
			}
		}

		//US Dollar to...
		if (c == 2)
		{
			if (ex == 1)
			{
				baht = m * 31.06;
			}

			if (ex == 2)
			{
				yen = m * 105.99;
			}

			if (ex == 3)
			{
				won = m * 1186.18;
			}

			if (ex == 4)
			{
				pound = m * 0.75;
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
				won = m * 11.19;
			}

			if (ex == 4)
			{
				pound = m * 0.0071;
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
				us = m * 0.00084;
			}

			if (ex == 3)
			{
				yen = m * 0.089;
			}

			if (ex == 4)
			{
				pound = m * 0.00063;
			}
		}

		//Pound Sterling to...
		if (c == 5)
		{
			if (ex == 1)
			{
				baht = m * 41.39;
			}

			if (ex == 2)
			{
				us = m * 1.33;
			}

			if (ex == 3)
			{
				yen = m * 141.24;
			}

			if (ex == 4)
			{
				won = m * 1580.38;
			}
		}

		//Total Exchange
		if ((c == 2 && ex == 1) || (c == 3 && ex == 1) || (c == 4 && ex == 1) || (c == 5 && ex == 1))
		{
			printf("\n%s %f %s\n", total, baht, B);
		}
		
		if ((c == 1 && ex == 1) || (c == 3 && ex == 2) || (c == 4 && ex == 2) || (c == 5 && ex == 2))
		{
			printf("\n%s %f %s\n", total,us, US);
		}

		if ((c == 1 && ex == 2) || (c == 2 && ex == 2) || (c == 4 && ex == 3) || (c == 5 && ex == 3))
		{
			printf("\n%s %f %s\n", total,yen, Y);
		}
				
		if ((c == 1 && ex == 3) || (c == 2 && ex == 3) || (c == 3 && ex == 3) || (c == 5 && ex == 4))
		{
			printf("\n%s %f %s\n", total,won, W);
		}

		if ((c == 1 && ex == 4) || (c == 2 && ex == 4) || (c == 3 && ex == 4) || (c == 4 && ex == 4))
		{
			printf("\n%s %f %s\n", total, pound, P);
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