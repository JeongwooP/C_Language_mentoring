#include <stdio.h>
int main (void)
{
	int a;
	int i;

	printf("하나의 정수를 입력하시오:");
	scanf("%d", &a);

	printf("결과:");

	for(i=1; i<=a; i++)
	{
		if(a%i==0)
			{printf(" %d ",i);
		}
	}
	printf("\n");
	return 0;

}