#define _CRT_SECURE_NO_WARNIGS
#include<stdio.h>
#include<conio.h>

int main()
{
	char c;

	/* buffer가 중간에 없으면, 입력을 한 그대로 바로 출력을 한다.*/
	//while ((c = _getche()) != '.') /* _getche() buffer를 통하지 않고 작동. */
	//	putchar(c);


	/* buffer가 있다면, 입력할 때마다 한 글자 씩 버퍼로 이동, 버퍼에 담긴 내용이 통째로 전달*/
	while ((c = getchar()) != '.')
		putchar(c);
	return 0;
}