#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define STRLEN 81

int main()
{
	/* Creating Space */

	//char* name =""; // Error at RUN-TIME
	/*char name[128];
	int result = scanf("%s", name);*/



	/* ------------------------------
		scanf() vs gets()
		scanf() reads one word
		gets() reads one line and removes \n and aa \0
	   ------------------------------*/ 

	//char words[STRLEN] = ""; // Warning without initialization

	////gets(words); // gets(char* str) 매개변수 : 배열을 대표하는 주소를 넣으시오.

	//gets_s(words, sizeof(words)); /*	gets의 매개변수는 포인터이다. 그렇기 때문에 메모리의 첫주소는 알지만,
	//									메모리 어디서 끝나는지는 모른다.
	//									gets의 문제점을 보안해주기 위해서, 
	//									gets_s에서는 매개변수를 포인터와 사이즈를 받는다.*/
	//printf("START\n");
	//printf("%s\n", words);
	//puts(words); // 자동으로 줄바꿈을 해줌.
	//puts("END.");

	// TODO: try char words[5]; --> runtime error 발생.


	/* ----------fgets() and fputs()---------- */

	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin); /*		// does NOT remove \n
	//								fgets() file을 입력받을 때 사용
	//								stdin(standard input) : file point를 넣어주지만
	//								stdin을 써주면, 콘솔 입력도 가능
	//							*/

	////TODO: try char words[5]; runtime error 발생x
	////TODO: replace '\n' with '\0'
	///*while (1) {
	//	for (int i = 0; i < sizeof(words); ++i) {
	//		if (words[i] == '\n') {
	//			words[i] = '\0';
	//			break;
	//		}
	//	}
	//	break;
	//}*/
	//int i = 0;
	//while (words[i] != '\n' && words[i] != '\0')
	//	i++;
	//if (words[i] == '\n')
	//	words[i] = '\0';

	//fputs(words, stdout); // does NOT add \n
	//fputs("END", stdout); 



	/*---------- Small array---------- */

	//char small_array[5];
	//puts("Enter long strings:");
	////fgets(small_array, 5, stdin);
	//printf("%p\n", small_array);
	//printf("%p\n", fgets(small_array, 5, stdin)); // Return value (입력 받은 Pointer 반환)
	//fputs(small_array, stdout);



	/* ----------Repeating short reading---------- */

	/*char small_array[5];
	puts("Enter long strings:");
	while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
		fputs(small_array, stdout);*/



	/* ----------scanf()---------- */

	//char str1[6], str2[6];
	//int count = scanf("%5s %5s", str1, str2);
	////int count = scanf("%6s %6s", str1, str2); // run-time error
	//int count = scanf_s("%5s %5s", str1, 6, str2, 6);
	//printf("%s|%s \n", str1, str2);



	/* ----------An example of custom input function---------- */
	char word[11];
	puts(custom_string_input(word, 11));

	return 0;
}

char* custom_string_input(char* st, int n) {
	char* ret_ptr;
	int i = 0;

	ret_ptr = fgets(st, n, stdin);
	if (ret_ptr) 
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n') // claer buffer
				continue;

	}
	return ret_ptr;
}