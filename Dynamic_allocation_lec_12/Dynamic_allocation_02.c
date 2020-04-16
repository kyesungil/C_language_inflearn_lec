#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
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

	return 0;
}