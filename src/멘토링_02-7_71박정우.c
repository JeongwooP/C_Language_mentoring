#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 6
int lotto(int list[], int n);
int main ()
{
	int a[size];
	int i;

	srand((unsigned)time(NULL));

	for(i=0;i<size;i++)
	{
		lotto(a, i);	
	}


}

int lotto(int list[], int n)
{
	list[n]=rand()%45+1;
	return printf(" %d ",list[n]);
}