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
	char str[50],*p,*l, ask[] = "Answer(number)";
	int show=0,b,size;
	printf("Start Program?\t1.Yes\t2.No\t%s : ", ask);
	scanf_s("%d", &b);
	while (b == 1)
	{
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
				break;
			}
			p++;
			l--;
		}
		if (show == 1)
		{
			printf("\nNot Palindrome\n");
		}
		else
		{
			printf("\nPalindrome\n");
		}
		printf("\n%d Characters\n", size);
		printf("\nTry again?\t1.Yes\t2.No\t%s : ", ask);
		scanf_s("%d", &b);
		if (b == 2)
		{
			break;
		}
	}
	return 0;
}