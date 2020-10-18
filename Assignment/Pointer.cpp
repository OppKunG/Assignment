#include<stdio.h>

int Check_Error1(char in1[50])
{
	if (in1[0] == '-')
	{
		printf("invalid number\n");
		return 0;
	}
	else
		return 1;
}

int Check_Error2(char in2[2])
{
	if (in2[1] != '\0')
	{
		printf("invalid digit\n");
		return 0;
	}
	else
		return 1;
}

int main()
{
	char in1[50] = { '\0' }, in2[2] = { '\0' }, * p, * l;
	int count = 0, check1, check2;
	scanf_s("%s", &in1, 49);
	scanf_s("%s", &in2, 2);

	check1 = Check_Error1(in1);
	check2 = Check_Error2(in2);

	if (check1 == 1 && check2 == 1)
	{
		p = &in1[0];
		l = &in2[0];

		while (*p!='\0')
		{
			if (*p == *l)
				count++;
			p++;
		}
		printf("%d\n", count);
	}
	return 0;
}