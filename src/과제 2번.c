#include <stdio.h>

int main (void)
{
	int number=1;
	int N;
	int sum=0;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &N);

	for(number; number <=N; number++)
	{sum=sum+number;}
	printf("1���� %d������ �հ�� %d��\n", N, sum);

	number=1;
	sum=0;

	while(number<=N)
		{sum=sum+number;
	number=number+2;}
		printf("1���� %d���� Ȧ���� �հ�� %d��\n", N, sum);
	
	number=0;
	sum=0;

	do
	{	sum=sum+number;
		number+=2;
		

	}while(number<=N);
		printf("1���� %d���� ¦���� �հ�� %d��.\n",N, sum);

	return 0;
}