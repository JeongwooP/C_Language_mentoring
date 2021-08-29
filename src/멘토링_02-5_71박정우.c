#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double cal (int b, double c[]);
int main ()
{
	double a[6]={0};
	double i;
	int j;
	int k;

	srand((unsigned)time(NULL));

	for(i=1;i<=100000;i++)
	{
		j=rand()%6+1;
		cal (j, a);
		
	}

	for(k=1;k<=6;k++)
	{
		printf("[%d]=%5.0lf\n", k, a[k-1]);
	}

	return 0;
}

double cal (int b, double c[])
{
	if (b==1)
		return c[0]=c[0]+1;
	else if (b==2)
		return c[1]=c[1]+1;
	else if (b==3)
		return c[2]=c[2]+1;
	else if (b==4)
		return c[3]=c[3]+1;
	else if (b==5)
		return c[4]=c[4]+1;
	else if (b==6)
		return c[5]=c[5]+1;

}