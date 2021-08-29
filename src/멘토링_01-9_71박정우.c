#include <stdio.h>

double Round(double a);
int Number(int b);
int main ()
{
	double d;
	int i;

	printf("하나의 실수를 입력하시오: ");
	scanf("%lf", &d);

	i=Round(d);

	printf("결과 : %d\n", i);

	return ;
}

double Round(double a)
{
	int result;

	if (a>=0)
		{if (a-Number(a) >= 0.5)
			result = Number(a)+1;

		else if (a-Number(a) < 0.5)
			result = Number(a);
	}
	else
	{
		if (a-Number(a) > -0.5)
			result = Number(a);
		else if (a-Number(a) <= -0.5)
			result = Number(a)-1;
	}

	return result;
}

int Number(int b)
{
	return b;
}