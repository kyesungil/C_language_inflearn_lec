#include<stdio.h>

/*2차원 배열과 메모리*/

int main()
{
	/**** 2차원 배열도 메모리는 1차원이다. ****/

	int arr[2][3] = { {1,2,3},
					  {4,5,6,} };

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d ", arr[j][i]);

		printf("\n");
	}
	printf("\n");

	/** 2차원 배열도 메모리는 1차원이기 때문에 가능하다.**/
	int* ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		printf("%d ", ptr[k]);
		//printf("%d ", *(ptr + k));
	printf("\n\n");

	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0])); // 출력 24 12
	printf("\n");

	return 0;
}