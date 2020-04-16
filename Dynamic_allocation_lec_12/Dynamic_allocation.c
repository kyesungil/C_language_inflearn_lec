﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/* 1.
		- malloc()은 void type pointer(void*)를 리턴합니다.
		- 첫번째 주소를 리턴해줍니다.(void type pointer이기 때문에 앞에 형변화를 해줍니다.)

		- 메모리 할당에 실해할 경우 NULL을 반환합니다.


		- free() 메모리를 회수합니다.
		- ptr 변수는 stack에 저장되기 때문에 scope를 나가면 pointer는 사라지지만,
		  동적할당 메모리는 사라지지 않는다.
		  동적할당 이후 꼭 free()로 메모리를 회수하자.

	*/

	int n = 10;

	// heap에 동적 메모리 할당	
	char* ptr = (char*)malloc(n * sizeof(char));
	printf("동적메모리 할당 후 : %p\n", ptr);

	// 메모리 할당 실패할 경우 NULL 반환
	if (ptr == NULL)
	{
		printf("메모리 할당 실패\n");
	}

	// 메모리 회수
	free(ptr);
	printf("free() 메모리 회수 후 : %p\n", ptr);

	// 포인터 변수 = null
	ptr = NULL;
	printf("ptr = NULL 후 : %p\n", ptr);




	/* 2.
		동적 할당 배열

		-배열은 stack에 있기 때문에 블럭에서 나가면 자동으로 메모리를 제거하지만,
		 heap에 있는 메모리는 프로그래머가 요청하기 전까지 남아있다.
	*/


	/* 동적 할당 - 배열 1D */

	int k = 10;

	int* arr = (int*)malloc(k * sizeof(int));

	if (arr != NULL)
	{
		// malloc - 초기화 해주지 않는다. 쓰레기값 출력.
		// arr[0] = -842150451, arr[1] = -842150451....
		for (int i = 0; i < k; i++)
			printf("arr[%d] = %d, ", i, arr[i]);
		printf("\n");

		// 초기화 작업
		for (int i = 0; i < k; i++)
			*(arr + i) = (double)i;

		// 초기화 후 출력.
		// arr[0] = 0, arr[1] = 1, arr[2] = 2, arr[3] = 3.....
		for (int i = 0; i < k; i++)
			printf("arr[%d] = %d, ", i, *(arr + i));
		printf("\n");
	}

	free(arr);
	arr = NULL;


	// 2차원 배열
	int row = 3, col = 2;
	int(*ptr2d)[2] = (int*)malloc(sizeof(int) * row * col);
	//int(*ptr2d)[col] = (int*)malloc(sizeof(int) * row * col); visual_studio 지원x


	//초기화
	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			ptr2d[r][c] = c + col * r;

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
			printf("%d ", ptr2d[r][c]);
		printf("\n");
	}
	/*
		출력
		0 1
		2 3
		4 5
	*/

	//메모리 반환
	free(ptr2d);
	ptr2d = NULL;




	/* 3.
		1차원 배열을 2차원 배열처럼 사용하기

		row = 3 , col = 2
		(r, c)

		2D
		(0, 0) (0, 1)
		(1, 0) (1, 1)
		(2, 0) (2, 1)

		1D
		(0, 0) (0, 1) (1, 0) (1, 1) (2, 0) (2, 1)
		 0		1	   2	  3		 4		5	=	c + col * r  (index)

	*/

	int row = 3, col = 2;

	int* ptr2d = (int*)malloc(row * col * sizeof(int));

	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			ptr2d[c + col * r] = c + col * r;

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
			printf("%d ", *(ptr2d + c + col * r));
		printf("\n");
	}
	/*
		출력
		0 1
		2 3
		4 5
	*/




	/* 1차원 배열을 3차원 배열처럼 사용하기

			row = 3, col = 2, depth = 2

		(0, 0, 0)(0, 1, 0)
		(1, 0, 0)(1, 1, 0)
		(2, 0, 0)(2, 1, 0)
		------------------
		(0, 0, 1)(0, 1, 1)
		(1, 0, 1)(1, 1, 1)
		(2, 0, 1)(2, 1, 1)

		1D
		(0, 0, 0)(0, 1, 0)(1, 0, 0)(1, 1, 0)(2, 0, 0)(2, 1, 0)(0, 0, 1)(0, 1, 1)(1, 0, 1)(1, 1, 1)(2, 0, 1)(2, 1, 1)
		0		1		  2			3		4		 5		  6			7		8		  9		  10		11
		= c + col * r + (col * row) * d
	*/

	int row = 3, col = 2, depth = 2;

	int* ptr3d = (int*)malloc(row * col * depth * sizeof(int));

	for (int d = 0; d < depth; d++)
		for (int r = 0; r < row; r++)
			for (int c = 0; c < col; c++)
				ptr3d[c + col * r + (col * row) * d] = c + col * r + (col * row) * d;

	for (int d = 0; d < depth; d++)
		for (int r = 0; r < row; r++)
		{
			for (int c = 0; c < col; c++)
				printf("%d ", *(ptr3d + c + col * r + (col * row) * d));
			printf("\n");
		}
	/*
		출력
		0 1
		2 3
		4 5
		6 7
		8 9
		10 11
	*/


	/* 1차원 배열을 4차원 배열처럼 사용하기

		row col depth height
		(r, c, d, h)

		index = c + col * r + (col * row ) * d + (col * row * depth) * h
	*/

	return 0;
}