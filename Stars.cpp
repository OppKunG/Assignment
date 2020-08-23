#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//Pseudo Code Ex1
	/*int in;
	scanf("%d",&in);

	for (int j = 1; j <= in;) {
		printf("\n");
		j = j +1;

		for (int i = 2; i <= j;) {
			printf("*");
			i = i +1;
		}
	}


	//Pseudo Code Ex2
	
	/*int m,n;
	scanf("%d %d", &m,&n); 
	for (int j = 1; j <= m;) {
		printf("\n");
		j = j + 1;

		for (int i = 1; i <= n;) {
			printf("*");
			i = i + 1;
		}
	}*/

	//Pseudo Code Ex3
	int in;
	scanf("%d",&in);
	for (int i = 1; i <= in;) {
		printf("*");
		i = i + 1;
		for (int j = 3; j<=in;) {
			printf("-");
			j = j + 1;
			
		/*	for (int k = 3; k <= in;) {
			printf("\n");
			k = k + 1;
		}*/
		
		}
	}
	return 0;
}