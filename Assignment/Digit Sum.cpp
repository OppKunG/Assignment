#include<stdio.h>

int main()
{
	char str[100], * ch;
	int sum = 0;
	int i = 0;

	printf(" *** 80-digit summation ***\nEnter a number string : ");
	scanf_s("%s", &str,99);

	ch = str;

	while (ch[i] != '\0')
	{
		if (ch[i] >= '1' || ch[i] <= '9')
		{
			if (ch[i] == '1')
				sum += 1;
			if (ch[i] == '2')
				sum += 2;
			if (ch[i] == '3')
				sum += 3;
			if (ch[i] == '4')
				sum += 4;
			if (ch[i] == '5')
				sum += 5;
			if (ch[i] == '6')
				sum += 6;
			if (ch[i] == '7')
				sum += 7;
			if (ch[i] == '8')
				sum += 8;
			if (ch[i] == '9')
				sum += 9;
		}
		i++;
	}

	printf("sum = %d\n", sum);

	return 0;

}
