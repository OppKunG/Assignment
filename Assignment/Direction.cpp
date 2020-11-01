#include<stdio.h>

void Direction()
{
	int xa, ya, xb, yb;
	int da = 0, db = 0;
	int end = 0;

	printf("Xa : ");  scanf_s("%d", &xa);
	printf("Ya : ");  scanf_s("%d", &ya);
	printf("Xb : ");  scanf_s("%d", &xb);
	printf("Yb : ");  scanf_s("%d", &yb);
	printf("\n");

	while (xa != 0 && ya != 0 && xb != 0 && yb != 0 && end == 0)
	{
		if (xa == xb && ya == yb)
			printf("Nowhere");

		//North and South
		if ((yb - ya) == 0)
			db = 1;
		else if ((yb - ya) > 0)
			printf("North");
		else
			printf("South");

		//East and West
		if ((xb - xa) == 0)
			da = 1;
		else if ((xb - xa) > 0)
			if (db == 0 && da == 0)
				printf("-east");
			else
				printf("East");
		else
			if (db == 0 && da == 0)
				printf("-west");
			else
				printf("West");

		printf("\n");

		end++;
	}

	if(xa == 0 && ya == 0 && xb == 0 && yb == 0)
		printf("Good bye\n");
}

int main()
{
	Direction();
	return 0;
}