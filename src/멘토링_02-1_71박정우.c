#include <stdio.h>

int Factorial(int a);

int main()
{
	int i;
	int j;

	printf("�ϳ��� ������ �Է��Ͻÿ�:");
	scanf("%d", &i);
	j=Factorial(i);
	printf("��� = %d\n", j);

	return 0;
}
int Factorial(int a)
{
	int result; 

	if (a<=1)
		return a;

	else if (a>1)
		result=a*Factorial(a-1);

	return result;
}