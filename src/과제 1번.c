#include <stdio.h>

int main(void)
{
	char eng=0;

while(eng !=46)
{	
	printf("�����ڸ� �Է��Ͻÿ�:\n(����� '.')\n");
	scanf("%c", &eng);

	if (eng>=65 && eng<=90)
		printf("�빮�� �Դϴ�\n");
		
	else if (eng>=97 && eng<=122)
		printf("�ҹ��� �Դϴ�\n");
		
	else
		printf("�����ڰ� �ƴմϴ�\n");

	fflush(stdin);
		
}


return 0;}