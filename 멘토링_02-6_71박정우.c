#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int order(int list[]);

int main ()
{
	int a[size];
	int n;

	srand((unsigned)time(NULL));

	for(n=0;n<size;n++)
	{
		a[n]=rand()%100+1;
	}

	order(a);

	for(n=0;n<size;n++)
	{
	printf(" %d ",a[n]);
	}

}
int order(int list[])
{
	int i;
	int least;
	int j;
	int temp;

	for(i=0;i<size-1;i++)
	{
		least=i;
		for(j=i+1;j<size;j++)
		{
			if (list[least]>list[j])
			{
				temp=list[least];
				list[least]=list[j];
				list[j]=temp;
			}
				
		}
	}
}