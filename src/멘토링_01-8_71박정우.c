#include <stdio.h>

int Absolute(int a);

int main (void)
{
	int i;
	int result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &i);

	result = Absolute(i);

	printf("��� : %d\n", result);

	return 0;
}

int Absolute(int a)
{
	int b;

	if (a>=0)
		b=a;
	else if(a<0)
		b=-a;

	return b;
}