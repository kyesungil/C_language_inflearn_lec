#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch;

	//ch = getchar(); // 글자 하나를 가져온다.
	//putchar(ch); // 글자 하나를 출력한다.
	

	
	while ((ch = getchar()) != '\n')
	{
		// 대문자 소문자 바꾸기
		if (ch >= 'a' && ch <= 'z') // 'A' = 65, 'a' = 97
			ch -= 'a' - 'A';
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';

		// 숫자이면 별표로 변경
		if (ch >= '0' && ch <= '9')
			ch = '*';

		// f,F 일때 X로 바꾸기
		if (ch == 'f' || ch == 'F')
			ch = 'X';

		putchar(ch);
	}

	putchar(ch);

	return 0;
}