#include<stdio.h>
#include<math.h>

char ask[] = "Answer(number)", pm[] = "Perimeter", a[] = "Area", sa[] = "Surface Area", v[] = "Volume";
float pi = 3.14159;

void Intro(void);
void Dimension_2D(void);
void Dimension_3D(void);

int main() 
{
	int p,b;
	
	printf("Start Program?\t1.Yes\t2.No\t%s : ",ask);
	scanf_s("%d", &b);
	while (b==1)
	{
		Intro();
		printf("\n\n\t\t      1. 2D Dimension\t\t2. 3D Dimension\n%s : ", ask);
		scanf_s("%d", &p);

		if (p == 1)		Dimension_2D();
		
		if (p == 2)		Dimension_3D();
					
		printf("\nTry again?\t1.Yes\t2.No\t%s : ",ask);
		scanf_s("%d",&b);

		if (b == 2) 	break;
	}
	return 0;
}

// GUI

void Intro()
{
	printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
	printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
	printf("\n\n\t\t\t  *Geometry Formula Program*\n\t\t\t\t    Ver.Beta");
}

void Dimension_2D()
{
	void Square(int);
	void Rectangle(int);
	void Triangle(int);
	void Parallelogram(int);
	void Circle(void);

	int d,c;
	printf("\n***Choose Your Shape to calculate***\n\n1.Square\t2.Circle\t3.Rectangle\t4.Triangle\t5.Parallelogram\n\n%s : ", ask);
	scanf_s("%d", &d);

	if (d!=2)
	{
		printf("\n***What your want to calculate***\n\n\t\t1.Perimeter\t2.Area\n\n%s : ", ask);
		scanf_s("%d", &c);

		if (d == 1)	Square(c);

		if (d == 3)	Rectangle(c);

		if (d == 4)	Triangle(c);

		if (d == 5)	Parallelogram(c);
	}
	if (d == 2)	Circle();
}

void Dimension_3D()
{
	void Cube(int);
	void Cylinder(int);
	void Cone(int);
	void Sphere(int);
	void Rectangular_Prism(int);

	int d, c;

	printf("\n***Choose Your Shape to calculate***\n\n\t1.Cube\t2.Cylinder\t3.Cone\t4.Sphere\t5.Rectangular Prism\n\n%s : ", ask);
	scanf_s("%d", &d);
	printf("\n***What your want to calculate***\n\n\t\t1.Surface Area\t2.Volume\n\n%s : ", ask);
	scanf_s("%d", &c);

	if (d == 1)	Cube(c);

	if (d == 2)	Cylinder(c);
	
	if (d == 3)	Cone(c);
	
	if (d == 4)	Sphere(c);

	if (d == 5)	Rectangular_Prism(c);
}


// Geometry 2D Dimension

void Square(int c)
{
	float s,ans;
	printf("\nSide : ");
	scanf_s("%f", &s);
	if (c == 1)
	{
		ans = 4 * s;
		printf("\nSquare %s : %.2f\n", pm, ans);
	}
	if (c == 2)
	{
		ans = s * s;
		printf("\nSquare %s : %.2f\n", a, ans);
	}
}

void Rectangle(int c)
{
	float w, l, ans;

	printf("\nWidth : ");
	scanf_s("%f", &w);
	printf("\nLength : ");
	scanf_s("%f", &l);
	if (c == 1)
	{
		ans = (w + l) * 2;
		printf("\nRectangle %s : %.2f\n", pm, ans);
	}
	if (c == 2)
	{
		ans = w * l;
		printf("\nRectangle %s : %.2f\n", a, ans);
	}
}

void Triangle(int c) 
{
	float s1, s2, s3, S1, S, ans;

	printf("\nSide 1 : ");
	scanf_s("%f", &s1);
	printf("\nSide 2 : ");
	scanf_s("%f", &s2);
	printf("\nSide 3 : ");
	scanf_s("%f", &s3);
	if (c == 1)
	{
		ans = s1 + s2 + s3;
		printf("\nTriangle %s : %.2f\n", pm, ans);
	}
	if (c == 2)
	{
		S = (s1 + s2 + s3) / 2;
		S1 = S * (S - s1) * (S - s2) * (S - s3);
		ans = sqrt(S1);
		if (S1 > 0)
		{
			printf("\nTriangle %s : %.2f\n", a, ans);
		}
		if (S1 <= 0)
		{
			printf("\nThat 3 Side. It can't be triangle.\n");
		}
	}
}

void Parallelogram(int c)
{
	float s1, s2, s3, base, h, ans;

	printf("\nSide 1 : ");
	scanf_s("%f", &s1);
	printf("\nSide 2 : ");
	scanf_s("%f", &s2);
	printf("\nBase : ");
	scanf_s("%f", &base);
	printf("\nHeight : ");
	scanf_s("%f", &h);
	if (c == 1)
	{
		ans = (s1 + s2) * 2;
		printf("\nParallelogram %s : %.2f\n", pm, ans);
	}
	if (c == 2)
	{
		if (base == s1 || base == s2)
		{
			ans = base * h;
			printf("\nParallelogram %s : %.2f\n", a, ans);
		}

	}
}

void Circle()
{
	int c2;
	float r,ans;

	printf("\n***What your want to calculate***\n\n\t\t1.Circumference\t\t2.Area\n\n%s : ", ask);
	scanf_s("%d", &c2);
	printf("\nRadius : ");
	scanf_s("%f", &r);
	if (c2 == 1)
	{
		ans = 2 * pi * r;
		printf("\nCircumference : %.2f\n", ans);
	}
	if (c2 == 2)
	{
		ans = pi * r * r;
		printf("\nCircle %s : %.2f\n", a, ans);
	}
}


// Geometry 3D Dimension 

void Cube(int c) 
{
	float s,ans;

	printf("\nSide : ");
	scanf_s("%f", &s);
	if(c == 1)
		{
			ans = 6*s*s;
			printf("\nCube %s : %.2f\n",sa, ans);
		}
	if(c == 2)
		{
			ans = s*s*s;
			printf("\nCube %s : %.2f\n",v, ans);
		}
}

void Cylinder(int c) 
{
	float r,h,ans;

	printf("\nRadius : ");
	scanf_s("%f", &r);
	printf("\nHeight : ");
	scanf_s("%f", &h);
	if(c == 1)
	{
		ans = (2*pi*r*h)+(2*pi*r*r);
		printf("\nCylinder %s : %.2f\n",sa, ans);
	}
	if(c == 2)
	{
		ans = pi*r*r*h;
		printf("\nCylinder %s : %.2f\n",v, ans);
	}
}

void Cone(int c) 
{
	float r, l, h, ans;

	printf("\nRadius : ");
	scanf_s("%f", &r);
	printf("\nLength : ");
	scanf_s("%f", &l);
	printf("\nHeight : ");
	scanf_s("%f", &h);
	if(c == 1)
	{
		ans = pi*r*l;
		printf("\nCone %s : %.2f\n",sa, ans);
	}
	if(c == 2)
	{
		ans = (pi*r*r*h)/3;
		printf("\nCone %s : %.2f\n",v, ans);
	}
}

void Sphere(int c)
{
	float r, ans;

	printf("\nRadius : ");
	scanf_s("%f", &r);
	if (c == 1)
	{
		ans = 4 * pi * r * r;
		printf("\nSphere %s : %.2f\n", sa, ans);
	}
	if (c == 2)
	{
		ans = (4 * pi * r * r * r) / 3;
		printf("\nSphere %s : %.2f\n", v, ans);
	}
}

void Rectangular_Prism (int c)
{
	float w, l, h, ans;
	
	printf("\nWidth : ");
	scanf_s("%f", &w);
	printf("\nLength : ");
	scanf_s("%f", &l);
	printf("\nHeight : ");
	scanf_s("%f", &h);
	if (c == 1)
	{
		ans = 2 * ((l * w) + (l * h) + (w * h));
		printf("\nRectangular Prism %s : %.2f\n", sa, ans);
	}
	if (c == 2)
	{
		ans = w * l * h;
		printf("\nRectangular Prism %s : %.2f\n", v, ans);
	}
}