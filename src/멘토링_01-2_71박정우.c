#include <stdio.h>

int main (void)
{
	int a;

	printf("하나의 정수를 입력하시오:");
	scanf("%d", &a);

	if (a>0)
		printf("양수입니다.\n");
	else if (a==0)
		printf("0입니다.\n");
	else
		printf("음수입니다.\n");

	return 0;

}