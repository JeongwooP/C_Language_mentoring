#include <stdio.h>
int main (void)
{
	int a;
	int i;
	int j;

	printf("하나의 정수를 입력하시오:");
	scanf("%d", &a);

	for(i=4; i>0; i--)
	{
		for(j=1; j<=i; j++)
		{    printf("*");}

		printf("\n");
	}

	return 0;
}