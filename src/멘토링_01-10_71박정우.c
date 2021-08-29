#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cal(int a, int b);

int main (void)
{
	int typer;
	int com;

	srand((unsigned)time(NULL));

	printf("1.가위/2.바위/3.보: ");
	scanf("%d", &typer);

	com=1+rand()%3;

	return cal(typer, com);

	
}

int cal(int a, int b)
{
	if (a==1)
	{	if (b==1)
			return printf("컴퓨터는 가위를 냈습니다.\n비겼습니다!\n");
		else if(b==2)
			return printf("컴퓨터는 바위를 냈습니다.\n졌습니다!\n");
		else
			return printf("컴퓨터는 보를 냈습니다.\n이겼습니다!\n");
	}
	if (a==2)
	{	if (b==1)
			return printf("컴퓨터는 가위를 냈습니다.\n이겼습니다!\n");
		else if(b==2)
			return printf("컴퓨터는 바위를 냈습니다.\n비겼습니다!\n");
		else
			return printf("컴퓨터는 보를 냈습니다.\n졌습니다!\n");
	}
	if (a==3)
	{
		if (b==1)
			return printf("컴퓨터는 가위를 냈습니다.\n졌습니다!\n");
		else if(b==2)
			return printf("컴퓨터는 바위를 냈습니다.\n이겼습니다!\n");
		else
			return printf("컴퓨터는 보를 냈습니다.\n비겼습니다!\n");
	}
}