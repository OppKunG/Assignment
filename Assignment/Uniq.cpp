#include<stdio.h>

int count_character(char out[100])
{
	char* c;
	int count = 0;
	c = &out[0];
	while (*c != '\0')
	{
		c++;
		count++;
	}
	return count;
}

int main()
{
	char str1[100] = "\0", str2[100] = "\0", out1[100] = "\0", out2[100] = "\0", * p1, * p2, bw = '\0', d = '\0', * c1, * c2;
	int i = 0, j = 0,size1,size2;
	
	printf("--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t\t    *Uniq Program*\n\n");
	printf("Input 1 : ");
	scanf_s("%s", str1, 99);
	printf("\nInput 2 : ");
	scanf_s("%s", str2, 99);
	p1 = &str1[0];
	while (*p1 != '\0')
	{
		if (*p1 != bw)
		{
			bw = *p1;
			out1[i] = bw;
			i++;		
		}
		p1++;
	}
	p2 = &str2[0];
	while (*p2 != '\0')
	{
		if (*p2 != d)
		{
			d = *p2;
			out2[j] = d;
			j++;
		}
		p2++;
	}

	printf("\nuniq(\"%s\") = \"%s\"\n( %d Characters )\n\nuniq(\"%s\") = \"%s\"\n( %d Characters )\n", str1, out1, count_character(out1), str2, out2, count_character(out2));

	size1 = count_character(out1);
	size2 = count_character(out2);

	if (size1 == size2)
	{
		int merge = 0;
		for (int a = 0; a < size1; a++)
		{
			if (out1[a] == out2[a])
			{
				merge++;
			}
		}
		if (merge == size1)
		{
			printf("\nEqual\n");
		}
		else
		{
			printf("\nNot Equal\n");
		}
	}
	else
	{
		printf("\nNot Equal\n");
	}
	return 0;
}