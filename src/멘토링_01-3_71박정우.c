#include <stdio.h>

int main (void)
{
	int a;
	int i;
	int sum;
	sum=0;
	i=1;

	printf("1�̻��� ������ �Է��Ͻÿ�:");
	scanf("%d", &a);

	while(i<=a)
	{
		sum=sum+i;
		i=i+1;
	}

	printf("���: %d\n", sum);

	return 0;
}