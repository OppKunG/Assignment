#include<stdio.h>

int count_character(char str[50])
{
	char* c;
	int count = 0;
	c = &str[0];
	while (*c != '\0')
	{
		c++;
		count++;
	}
	return count;
}

int main()
{
	char str[50],*p,*l;
	int show=0,no=0,size;

	printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t\t    *Palindrome Program*\n\n");
	printf("Input : ");
	scanf_s("%s",&str,49);
	size = count_character(str);
	p = &str[0];
	l = &str[size-1];
	while (l > p)
	{
		if (*l != *p)
		{
			show = 1;
			no = 1;
			break;
		}
		p++;
		l--;
	}
	if (show == 1||no == 1)
	{
		printf("\nNot Palindrome\n");
	}
	else
	{
		printf("\nPalindrome\n");
	}
	printf("\n%d Characters\n", size);
	return 0;
}