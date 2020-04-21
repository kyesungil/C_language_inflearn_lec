#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define STRLEN 81
#define SMALL 5
int main()
{
	/* 1. 
		scanf() and scnaf_s()
		- 연속적인 문자만 받기 가능하다. 
		  단, scanf("%[^\n]%*c", ); 사용하면 가능
		- scanf()는 구분 기호로 빈칸이나 줄바꿈을 찾는다.

		- scanf() 리턴값은 입력 개수에 따라서 달라진다
		  (입력이 1개이면 1, 입력이 2개이면 2)
	*/

	
	char str[20];
	int result = scanf("%s", str);
	char str1[6], str2[6];
	scanf("%1s %1s", str1, str2); // 한글자씩 입력받는다.
	scanf("%5s %5s", str1, str2); // 다섯글자씩 입력받는다.
	scanf("%6s %6s", str1, str2); // runtime error 발생.
	scanf("%[^\n]%*c", str); // \n 입력하면 종료된다. 

	scanf_s("%5s %5s", str1, 6, str2, 6); // scanf_s() : 최대size를 매개 변수로 넣어준다.
	
	int i;
	scanf("%i", &i); // 입력 : 123a 문자를 받기 전까지 출력
	printf("%i\n", i); // 출력 : 123

	char str2[10];
	scanf("%5s%*s", str2); // 문자가5글자 이상되면 뒤에는 날려버린다.
	printf("%s\n", str2); // *붙여진 해당 데이터는 무시

	int k; // %*d : *붙여진 해당데이터 무시
	scanf("%*d%*d%d", &k); // 입력 123 456 789
	printf("%d\n", k); // 출력 789

	char str3[10];
	scanf("%[a-z]",str3); // %[a-z] 소문자만 받는다.
	printf("%s\n", str3);
	char str4[10];
	scanf("%[1-5]", str4); // 1 ~ 5가 아닌 문자가 입력되면 입력받기 종료.
	printf("%s\n", str4);
	




	/* 2.
		char* gets(char* str);
		- 한줄을 읽습니다. 
		- 문자열 마지막에 '\n'을 제거하고 '\0'을 추가합니다.
		- gets()는 자기 자신이 사용할 수 있는 메모리 공간을 알수 없다. 보완 -> gets_s()
	*/

	char words[STRLEN] = "";
	gets(words);
	puts(words); // 자동을 '\n' 추가

	char wrd[SMALL] = ""; // SAMLL 5
	gets(wrd); // 배열 사이즈를 넘게 입력하면 runtime error 발생
	puts(wrd);



	/* 3.
		char *__cdecl gets_s(char *_Buffer, rsize_t _Size)
		- 포인터와 사이즈를 받는다.
	*/

	char words[STRLEN] = "";
	gets_s(words,sizeof(words));
	puts(words); // 자동을 '\n' 추가

	char wrd[SMALL] = ""; // SAMLL 5
	gets(wrd,sizeof(wrd)); // 배열 사이즈를 넘게 입력하면 runtime error 발생
	puts(wrd);





	/* 4.
		char *fgets(char *str, int n, FILE *stream)
		- char *fgets (char *str, int n, FILE *stream)는 지정된 스트림에서 줄을 읽고 str이 가리키는 문자열에 저장합니다. 
		- 문자열 마지막 '\n'이 제거되지 않는다. 
		- 배열 사이즈를 넘게 입력해도 runtime error 발생하지 않는다.
		- 리턴값 : 제대로 작동했으면 입력받은 포인트를 다시 반환하지만, 실패할 경우 NULL 반환

		fputs() 
		- 문자열 마지막에 '\n'을 추가 하지 않는다. (puts는 '\n' 을 추가함)
	*/

	char words[STRLEN] = "";
	char* find;
	fgets(words, STRLEN, stdin);
	fputs(words, stdout);
	printf("%d\n", strlen(words)); 

	/* 
		'\n' 을 '\n'으로 바꾸기. 

	첫번째 방법
	for (int i = 0; words[i]; i++)
	{
		if (words[i] == '\n')
		{
			words[i] = '\0';
		}
	}

	두번재 방법
	*find = strchr(words, '\n');
	if (find)
		*find = '\0';
	*/

	char words[SMALL] = ""; // SMALL 5
	fgets(words, SMALL, stdin); // 입력 abcdefg
	fputs(words, stdout);; // 출력 abcd(마지막 \0), runtime error 발생하지 않는다.


	return 0;
}