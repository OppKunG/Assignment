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
	char str[50],*p,sw,out[50]="\0";
	int i = 0;

	printf("--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t\t    *String Program*\n\n");
	printf("Input : ");
	scanf_s("%s", str, 49);
	p = &str[0];
	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			sw = *p;
			sw += 32;
			out[i] = sw;
			i++;
		}
		if (*p >= 'a' && *p <= 'z')
		{
			sw = *p;
			sw -= 32;
			out[i] = sw;
			i++;
		}
		p++;
	}
	printf("\n%s\n\n%d Charracters\n", out, count_character(out));
	return 0;
}