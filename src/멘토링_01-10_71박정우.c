#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cal(int a, int b);

int main (void)
{
	int typer;
	int com;

	srand((unsigned)time(NULL));

	printf("1.����/2.����/3.��: ");
	scanf("%d", &typer);

	com=1+rand()%3;

	return cal(typer, com);

	
}

int cal(int a, int b)
{
	if (a==1)
	{	if (b==1)
			return printf("��ǻ�ʹ� ������ �½��ϴ�.\n�����ϴ�!\n");
		else if(b==2)
			return printf("��ǻ�ʹ� ������ �½��ϴ�.\n�����ϴ�!\n");
		else
			return printf("��ǻ�ʹ� ���� �½��ϴ�.\n�̰���ϴ�!\n");
	}
	if (a==2)
	{	if (b==1)
			return printf("��ǻ�ʹ� ������ �½��ϴ�.\n�̰���ϴ�!\n");
		else if(b==2)
			return printf("��ǻ�ʹ� ������ �½��ϴ�.\n�����ϴ�!\n");
		else
			return printf("��ǻ�ʹ� ���� �½��ϴ�.\n�����ϴ�!\n");
	}
	if (a==3)
	{
		if (b==1)
			return printf("��ǻ�ʹ� ������ �½��ϴ�.\n�����ϴ�!\n");
		else if(b==2)
			return printf("��ǻ�ʹ� ������ �½��ϴ�.\n�̰���ϴ�!\n");
		else
			return printf("��ǻ�ʹ� ���� �½��ϴ�.\n�����ϴ�!\n");
	}
}