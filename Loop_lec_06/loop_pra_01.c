#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>


int main()
{
	/*	<scanf의 반환값>
		입력값이 숫자면 1을 알파벳이면 0을 출력(지정해준 type에 따라서 변함)*/
	/*int x = 0;
	printf("값을 입력하세요 : ");
	printf("scanf의 return 값 : %d\n", scanf("%d", &x)); */



	/* 	예제 1> 숫자를 누루면 더하기 시작, 알파벳은 취소 */
	//int num, sum = 0;
	//
	//printf("Please Input Integer (termination button e) : ");

	//while (scanf("%d",&num) == 1) // scanf의 반환 값은 입력한 수의 개수이다.
	//{
	//	sum += num;
	//	printf("Input Integer(termination button e) : ");
	//}
	//printf("Sum = %d\n",sum);



	/*  예제 2> fabs을 이용한 PI값 맞추기 */
	/*const double PI = 3.1415926535897932;
	double guess = 0.0;
	printf("input PI : ");
	scanf("%lf", &guess);

	while (fabs(guess - PI) > 0.01) 
	{
		printf("again input PI : ");
		scanf("%lf", &guess);
	}
	printf("Correct!\n");*/



	/* _Bool 이용하기 */
	//_Bool my_true = (1 > 0);
	//_Bool my_false = (1 < 0);
	//printf("my_true : %d\n", my_true); // 1
	//printf("my_true : %d\n", my_false); // 0
	//printf(my_true ? "true" : "false");
	//printf("\n");
	//printf(my_false ? "true" : "false");
	//printf("\n");
	//printf(10 > 9 ? "true" : "false");
	//printf("\n");
	//printf(10 < 9 ? "true" : "false");
	//printf("\n");
	//bool T = true;
	//bool F = false;
	//printf("T = %d, F = %d\n", T, F); // 1,0


	/* 예제3>비밀 번호  
			탈출 조건일 때 do while이 편하다.
			while은 무한루프일 때 쓰기좋다 */

	//int passward = 0;
	//int guess = 0;
	//// 1. pasward 저장
	//printf("passward를 저장해주세요 : %d", passward);
	//scanf("%d", &passward);

	//do
	//{
	//	printf("door locked : ");
	//	scanf("%d", &guess);
	//} while (guess != passward);
	//
	//printf("Open door!\n");

	//return 0;
}
