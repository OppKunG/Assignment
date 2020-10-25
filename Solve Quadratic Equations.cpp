#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double a, b, c, determinant, root1,root2, realPart, imaginaryPart;

int Determinant()
{
    determinant = b * b - 4 * a * c;

    if (determinant > 0)    return 1;

    if (determinant == 0)   return 0;
}

void TwoValue()
{
// sqrt() function returns square root
    root1 = (-b+sqrt(determinant))/(2*a);
    root2 = (-b-sqrt(determinant))/(2*a);
	printf("root1 = %.2lf and root2 = %.2lf",root1 , root2); // (#2)
}

void OneValue()
{
    root1 = root2 = -b/2*a;
    printf("root1 = root2 = %.2lf", root1); // (#3)
}

void NotRealValue()
{
	realPart = -b/2*a;
    imaginaryPart = sqrt(-determinant)/2*a;
    printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart); // (#4)
}

int main()
{
    printf("Enter coefficients a, b and c : ");
    scanf("%lf %lf %lf",&a, &b, &c);

    if (Determinant() == 1 || Determinant() == 0)
    {
        // condition for real and different roots (#1)
        if (Determinant() == 1)	TwoValue();

        //condition for real and equal roots
        else	OneValue();
    }

// if roots are not real
    else	NotRealValue();

    return 0;
} 