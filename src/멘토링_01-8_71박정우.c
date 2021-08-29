#include <stdio.h>

int Absolute(int a);

int main (void)
{
	int i;
	int result;

	printf("정수를 입력하시오: ");
	scanf("%d", &i);

	result = Absolute(i);

	printf("결과 : %d\n", result);

	return 0;
}

int Absolute(int a)
{
	int b;

	if (a>=0)
		b=a;
	else if(a<0)
		b=-a;

	return b;
}