#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() 
{
	int p,d1,d2,c1,c2,c3,c4,b;
	char ask[]="Answer(number)",pm[]="Perimeter",a[]="Area",sa[]="Surface Area",v[]="Volume";
	float ans, w, l, r,s,h,pi=3.14159,s1,s2,s3,S,S1;
	
	printf("Start Program?\t1.Yes\t2.No\t%s : ",ask);
	scanf_s("%d", &b);
	while (b==1)
	{
		printf("\n\n--------------------------------------------------------------------------------\n|                  * *     *     *     ***     ***     *                       |\n|                  **      * * * *      *       *      *                       |\n|                  * *     *  *  *     ***      *      ****                    |");
		printf("\n--------------------------------------------------------------------------------\n********************** Only Computer Engineer to do this ***********************");
		printf("\n\n\t\t\t    *Geometry Formula Program*\n\t\t\t\t      v.3.5.0");
		printf("\n\n\t\t\t1. 2D Dimension\t\t2. 3D Dimension\n%s : ",ask);
		scanf_s("%d", &p);
//2D Dimension
		if (p == 1)
		{
			printf("\n***Choose Your Shape to calculate***\n\n\t\t1.Square\t2.Circle\t3.Rectangle\t4.Triangle\n%s : ",ask);
			scanf_s("%d", &d1);
			if (d1 == 1 || d1 == 3 || d1 == 4)
			{
				printf("\n***What your want to calculate***\n\n\t\t1.Perimeter\t2.Area\n%s : ",ask);
				scanf_s("%d", &c1);
//Square
				if (d1 == 1)
				{
					printf("\nSide : ");
					scanf_s("%f", &s);
					if (c1 == 1)
					{
						ans = 4 * s;
						printf("\nSquare %s : %.2f\n",pm, ans);
					}
					if (c1 == 2)
					{
						ans = s * s;
						printf("\nSquare %s : %.2f\n",a, ans);
					}
				}
//Rectangle
				if (d1 == 3)
				{
					printf("\nWidth : ");
					scanf_s("%f", &w);
					printf("\nLength : ");
					scanf_s("%f", &l);
					if (c1 == 1)
					{
						ans = (w + l) * 2;
						printf("\nRectangle %s : %.2f\n",pm, ans);
					}
					if (c1 == 2) 
					{
						ans = w * l;
						printf("\nRectangle %s : %.2f\n",a, ans);
					}
				}
//Triangle
				if (d1 == 4)
				{
					printf("\nSide 1 : ");
					scanf_s("%f", &s1);
					printf("\nSide 2 : ");
					scanf_s("%f", &s2);
					printf("\nSide 3 : ");
					scanf_s("%f", &s3);
					if (c1 == 1)
					{
						ans = s1+s2+s3;
						printf("\nTriangle %s : %.2f\n",pm, ans);
					}
					if (c1 == 2)
					{
						S = (s1 + s2 + s3) / 2;
						S1 = S*(S-s1)*(S-s2)*(S-s3);
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
			}
//Circle
			if (d1 == 2)
			{
				printf("\n***What your want to calculate***\n\n\t\t1.Circumference\t\t2.Area\n%s : ",ask);
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
					printf("\nCircle Area : %.2f\n", ans);
				}
			}
		}
//3D Dimension
		if (p == 2)
		{
			printf("\n***Choose Your Shape to calculate***\n\n\t1.Cube\t2.Cylinder\t3.Cone\t4.Sphere\t5.Rectangular Prism\n%s : ",ask);
			scanf_s("%d", &d2);
			printf("\n***What your want to calculate***\n\n\t\t1.Surface Area\t2.Volume\n%s : ",ask);
			scanf_s("%d", &c4);
//Cube
			if (d2 == 1)
			{
				printf("\nSide : ");
				scanf_s("%f", &s);
				if(c4 == 1)
				{
					ans = 6*s*s;
					printf("\nCube %s : %.2f\n",sa, ans);
				}
				if(c4 == 2)
				{
					ans = s*s*s;
					printf("\nCube %s : %.2f\n",v, ans);
				}
				
			}
//Cylinder
			if (d2 == 2)
			{
				printf("\nRadius : ");
				scanf_s("%f", &r);
				printf("\nHeight : ");
				scanf_s("%f", &h);
				if(c4 == 1)
				{
					ans = (2*pi*r*h)+(2*pi*r*r);
					printf("\nCylinder %s : %.2f\n",sa, ans);
				}
				if(c4 == 2)
				{
					ans = pi*r*r*h;
					printf("\nCylinder %s : %.2f\n",v, ans);
				}
			}
//Cone
			if (d2 == 3)
			{
				printf("\nRadius : ");
				scanf_s("%f", &r);
				printf("\nLength : ");
				scanf_s("%f", &l);
				printf("\nHeight : ");
				scanf_s("%f", &h);
				if(c4 == 1)
				{
					ans = pi*r*l;
					printf("\nCone %s : %.2f\n",sa, ans);
				}
				if(c4 == 2)
				{
					ans = (pi*r*r*h)/3;
					printf("\nCone %s : %.2f\n",v, ans);
				}
			}
//Sphere
			if (d2 == 4)
			{
				printf("\nRadius : ");
				scanf_s("%f", &r);
				if(c4 == 1)
				{
					ans = 4*pi*r*r;
					printf("\nSphere %s : %.2f\n",sa, ans);
				}
				if(c4 == 2)
				{
						ans = (4*pi*r*r*r)/3;
					printf("\nSphere %s : %.2f\n",v, ans);
				}
			}
//Rectangular Prism
			if (d2 == 5)
			{
				printf("\nWidth : ");
				scanf_s("%f", &w);
				printf("\nLength : ");
				scanf_s("%f", &l);
				printf("\nHeight : ");
				scanf_s("%f", &h);
				if (c4 == 1)
				{
					ans = 2 * ((l * w) + (l * h) + (w * h));
					printf("\nRectangular Prism %s : %.2f\n", sa, ans);
				}
				if (c4 == 2)
				{
					ans = w * l * h;
					printf("\nRectangular Prism %s : %.2f\n", v, ans);
				}
			}
		}
		printf("\nTry again?\t1.Yes\t2.No\t%s : ",ask);
		scanf_s("%d",&b);
		if (b == 2) 
		{
			break; 
		}
	}
	return 0;
}