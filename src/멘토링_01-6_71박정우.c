#include <stdio.h>

void GetMax(int a, int b);

int main (void)
{
	int c;
	int d;

	printf("�� ���� ������ �Է��Ͻÿ�:\n");
	scanf("%d %d",&c, &d);

	GetMax(c,d);

	return 0;
}

void GetMax(int a, int b)
{
	int Max;
	if (a>b)
	printf("��� : %d\n", a);
	else if (b>a)
	printf("��� : %d\n", b);
	else 
	printf("���ڰ� �����ϴ�.\n");
}