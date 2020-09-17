#include<stdio.h>
#include<math.h>

char In[] = "Input 3 sides : ";

void Intro(void);
int Check_Right_Triangle(int, int, int);
void Trigonometry(int, int, int);

int main()
{
	int a, b, c,check;
	Intro();
	printf("%s", In);
	scanf_s("%d %d %d", &a, &b, &c);
	check = Check_Right_Triangle(a, b, c);
	if (check==1)
		Trigonometry(a,b,c);
	return 0;
}

// GUI
void Intro()
{
	printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t       *Trigonometry Calculation Program*\n\t\t\t\t   ver.Beta\n");
}

int Check_Right_Triangle(int a, int b, int c)
{
	int max, check1, check2;
	if (a > b && a > c)
		max = a;
	else if (b > a && b > c) 
		max = b;
	else 
		max = c;

	check1 = sqrt(max * max);
	check2 = ((max - a) * (max - a)) + ((max - b) * (max - b)) + ((max - c) * (max - c));

	if (check1 == check2)
		return 1;
	else
		return 0;
}

void Trigonometry(int a, int b, int c)
{
	float opp,adj,hyp,sum;
	if (a > b && a > c)
		hyp = a;
	else if (b > a && b > c)
		hyp = b;
	else
		hyp = c;

	if (a < b && a < c)
		opp = a;
	else if (b < a && b < c)
		opp = b;
	else
		opp = c;

	sum = a + b + c;
	adj = sum - opp - hyp;

	printf("\n\tsin(37) = %.1f\t  |\tsin(53) = %.1f\n\t\t\t  |", opp / hyp * 1.0, adj / hyp * 1.0);
	printf("\n\tcos(37) = %.1f\t  |\tcos(53) = %.1f\n\t\t\t  |", adj / hyp * 1.0, opp / hyp * 1.0);
	printf("\n\ttan(37) = %.1f\t  |\ttan(53) = %.1f\n", opp / adj * 1.0, adj / opp * 1.0);
}