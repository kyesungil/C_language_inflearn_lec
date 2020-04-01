#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 탈출조건일 때 do while
int main()
{
	const int secret_code = 337;
	int guess = 0;

	/*while (guess != secret_code)
	{
		printf("Enter secret code : ");
		scanf("%d", &guess);
	}*/

	do
	{
		printf("Enter secret code : ");
		scanf("%d", &guess);
	} while (guess != secret_code);

	printf("Good!\n");
}