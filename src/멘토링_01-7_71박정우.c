#include <stdio.h>

int Factorial(int a);

int main (void)
{
	int i;
	int j;

	printf("입력 : ");
	scanf("%d", &i);

	j = Factorial(i);

	printf("결과 : %d\n ", j);

	return 0;
}

int Factorial (int a)
{
	int b;

	if(a<=1)
		b = 1;
	else 
		b = a*Factorial(a-1);

	return b;
}