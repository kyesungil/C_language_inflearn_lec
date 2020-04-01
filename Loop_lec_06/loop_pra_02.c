#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int compute_pow(int base, int exp);

#define PEOPLE 5
int main()
{
	// pra_01 연습하기
	//printf((1 < 2) ? "true" : "false");
	//int k = 0;
	//printf("%d\n", scanf("%d", &k));
	// do while 탈출 루프, while()은 무한루프



	/* 예제1> 각 사람들에게 콩을 할당 */
	/*int array[PEOPLE];
	int sum = 0;
	for (int i = 0; i < PEOPLE; ++i)
	{
		printf("%d번째 사람에게 줄 콩의 수 : ",i);
		scanf("%d", &array[i]);
		sum += array[i];
	}
	printf("총 나눠준 콩의 수 : %d", sum);*/



	/* 예제2>알파벳 앞에서 부터 줄이면서 출력 */
	/*const char first_char = 'A';
	const char last_char = 'Z';
	const int num_row = abs(first_char - last_char);
	
	for (int r = 0; r <= num_row; ++r)
	{
		for (char i = first_char + r; i <= first_char + num_row; ++i)
			printf("%c ", i);ㅜ
		printf("\n");
	}*/



	/* 예제3> 제곱*/
	/*int base, exp;
	
	while (scanf("%d %d", &base, &exp) == 2)
	{
		printf("result = %d\n", compute_pow(base, exp));
	}
	
	return 0;
}

int compute_pow(int base, int exp) 
{
	int result = 1;
	for (int i = 0; i < exp; ++i)
		result *= base;
	return result;
}*/