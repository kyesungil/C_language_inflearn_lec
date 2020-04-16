#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
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