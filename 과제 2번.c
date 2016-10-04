#include <stdio.h>

int main (void)
{
	int number=1;
	int N;
	int sum=0;

	printf("정수를 입력하시오:");
	scanf("%d", &N);

	for(number; number <=N; number++)
	{sum=sum+number;}
	printf("1부터 %d까지의 합계는 %d다\n", N, sum);

	number=1;
	sum=0;

	while(number<=N)
		{sum=sum+number;
	number=number+2;}
		printf("1부터 %d까지 홀수의 합계는 %d다\n", N, sum);
	
	number=0;
	sum=0;

	do
	{	sum=sum+number;
		number+=2;
		

	}while(number<=N);
		printf("1부터 %d까지 짝수의 합계는 %d다.\n",N, sum);

	return 0;
}