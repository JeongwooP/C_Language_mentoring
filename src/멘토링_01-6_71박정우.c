#include <stdio.h>

void GetMax(int a, int b);

int main (void)
{
	int c;
	int d;

	printf("두 수의 정수를 입력하시오:\n");
	scanf("%d %d",&c, &d);

	GetMax(c,d);

	return 0;
}

void GetMax(int a, int b)
{
	int Max;
	if (a>b)
	printf("결과 : %d\n", a);
	else if (b>a)
	printf("결과 : %d\n", b);
	else 
	printf("숫자가 같습니다.\n");
}