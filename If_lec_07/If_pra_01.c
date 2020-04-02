#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<float.h>

#define STOP '.'
int main()
{
	/* 
		예제 1> 문자수, 단어수, 라인수 출력하기 
	*/

	//char c;
	//int char_count = 0, word_count = 0, line_count = 0;
	//bool word_flag = false;
	//bool line_flag = false;

	//while ((c = getchar()) != STOP)
	//{
	//	// Char Counting
	//	if (!isspace(c))
	//		char_count++;

	//	// Word Counting - start
	//	if (!isspace(c) && !word_flag)
	//	{
	//		word_count++;
	//		word_flag = true;
	//	}
	//	// Word Counting - end
	//	if (isspace(c))
	//		word_flag = false;

	//	// Line Counting - start
	//	if (!isspace(c) && !line_flag)
	//	{
	//		line_count++;
	//		line_flag = true;
	//	}
	//	//Line Counting - end
	//	if (c == '\n')
	//		line_flag = false;
	//}

	//printf("Char_count = %d, Word_count = %d, Line_count = %d", char_count, word_count, line_count);



	/* 
		예제 2> 최대, 최소, 평균 구하기
	*/
	// 첫번재 방법>

	//double min = FLT_MAX;
	//double max = -FLT_MAX;
	//double sum = 0.0;
	//double input;
	//int count = 0;
	//
	//while (scanf("%lf", &input) == 1)
	//{
	//	// 범위 제한
	//	if (input < 0 || input > 99)
	//		continue;

	//	sum += input;

	//	max = (input > max) ? input : max;
	//	min = (input < min) ? input : min;

	//	count++;
	//}

	//printf("Max = %f, Min = %f, ave = %f\n", max, min, sum / count);


	//두번재 방법>

	//bool init_flag = false;
	//double max;
	//double min;
	//double sum = 0.0;
	//double input;
	//int count = 0;

	//while (scanf("%lf", &input) == 1)
	//{
	//	sum += input;

	//	// 초기화
	//	if (!init_flag)
	//	{
	//		max = input;
	//		min = input;
	//		init_flag = true;
	//	}

	//	max = input > max ? input : max;
	//	min = input < min ? input : min;

	//	count++;
	//}

	//printf("max = %f, min = %f, ave = %f\n", max, min, sum / count);



	/* 예제 3> swith 와 buffer 제거 연습 */

	//char c;

	//while ((c = getchar()) != '.')
	//{
	//	switch(c)
	//	{
	//	case 'a':
	//		printf("aaa\n");
	//		break;
	//	case 'b':
	//		printf("bbb\n");
	//		break;
	//	default:
	//		printf("nnn\n");
	//	}

	//	/* buffer char제거 */
	//	while (getchar() != '\n')
	//		continue;
	//}
	return 0;
}