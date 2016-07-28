#include <stdio.h>

int main ()
{
	int sum=0;
	int avg;
	int a[5];
	int i;

	printf("5개의 정수를 입력하시오:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		sum+=a[i];

	}

	avg=sum/5;

	printf("합:%d 평균:%d\n", sum, avg);

	return 0;

}