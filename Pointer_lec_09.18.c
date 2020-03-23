#include<stdio.h>

/* 9.18 포인터형 매개변수 */

void swap(int *a,int *b) {  // void swap(int a,int b) : 매개변수 a,b의 주소는 다르다
    
    printf("%p %p\n", a, b);

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{ 
	int a = 1, b = 2;

    printf("%p %p\n", &a, &b);

    swap(&a, &b); // swap(a,b) : a,b의 값이 매개변수 a,b에 복사만 될 뿐, 주소가 다르기 때문에 다르다.

    printf("%d %d\n", a, b);
}
