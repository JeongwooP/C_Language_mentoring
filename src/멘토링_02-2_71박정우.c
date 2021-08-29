#include <stdio.h>

int Fibonachi(int n);

int main()
{

	int i;
	int j;
	int n;

	printf("ют╥б:");
	scanf("%d", &i);
	j=i+1;
	for(n=1;n<=j;n++)
	{
		printf("%d ",Fibonachi(n));
	}
}
int Fibonachi(int n)
{
	if( n==0) 
		return 0;
	if( n==1) 
		return 1;
	return (Fibonachi(n-1) + Fibonachi(n-2));
}