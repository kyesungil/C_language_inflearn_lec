#include<stdio.h>

/* 10.4 포인터와 배열 */

int main()
{
	int arr[10];

	int num = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < num; ++i)
		arr[i] = (i + 1) * 100;

	int* ptr = arr; // 포인터 변수 = 배열의 이름(배열의 메모리 첫 주소), 배열의 이름이 포인터 처럼 사용된다.

	printf("%p %p %p\n", ptr, arr, &arr[0]); // 전부 같은 주소가 나온다. (포인터 변수,배열의 첫주소,배열의 첫주소)

	ptr += 2; // ptr + 8byte(int * 2 때문에)

	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

	// arr += 2;	포인터 변수로 대입후 연산가능하다. 바꾸는게 가능하다면 메모리 문제 발생.

	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]); // *(ptr + 1) , *(arr + 3) 가리키는 값을 가져와라.
														// 400 400 400

	/* 주의 */
	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);	// (괄호가 없을 때) 301 103 400


	// 많이 사용하는 예
	int* ptr1 = NULL;
	ptr1 = arr;
	for (int i = 0; i < num; ++i)
	{
		printf("%d %d\n", *ptr1++, arr[i]);
		//printf("%d %d\n", *(ptr1 + i), arr[i]);
		//printf("%d %d\n", *ptr1 + i, arr[i]);
	}
}