#include <stdio.h>
int main (void)
{
	int a;
	int i;

	printf("�ϳ��� ������ �Է��Ͻÿ�:");
	scanf("%d", &a);

	printf("���:");

	for(i=1; i<=a; i++)
	{
		if(a%i==0)
			{printf(" %d ",i);
		}
	}
	printf("\n");
	return 0;

}