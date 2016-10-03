#include <stdio.h>

int main(void)
{
	char eng=0;

while(eng !=46)
{	
	printf("영문자를 입력하시오:\n(종료는 '.')\n");
	scanf("%c", &eng);

	if (eng>=65 && eng<=90)
		printf("대문자 입니다\n");
		
	else if (eng>=97 && eng<=122)
		printf("소문자 입니다\n");
		
	else
		printf("영문자가 아닙니다\n");

	fflush(stdin);
		
}


return 0;}