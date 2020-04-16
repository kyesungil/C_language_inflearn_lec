#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
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

	
	return 0;
}