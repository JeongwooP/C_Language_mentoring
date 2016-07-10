#include <stdio.h>

int main (void)
{
	int a;
	int i;
	int sum;
	sum=0;
	i=1;

	printf("1이상의 정수를 입력하시오:");
	scanf("%d", &a);

	while(i<=a)
	{
		sum=sum+i;
		i=i+1;
	}

	printf("결과: %d\n", sum);

	return 0;
}