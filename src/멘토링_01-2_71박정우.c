#include <stdio.h>

int main (void)
{
	int a;

	printf("�ϳ��� ������ �Է��Ͻÿ�:");
	scanf("%d", &a);

	if (a>0)
		printf("����Դϴ�.\n");
	else if (a==0)
		printf("0�Դϴ�.\n");
	else
		printf("�����Դϴ�.\n");

	return 0;

}