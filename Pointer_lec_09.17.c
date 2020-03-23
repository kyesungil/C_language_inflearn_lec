#include<stdio.h>

int main()
{

	int a;
	char b;
	float c;
	double d;
	
	int* a_ptr = &a;
	char* b_ptr = &b;
	float* c_ptr = &c;
	double* d_ptr = &d;

	// 4 1 4 8 출력
	printf("%zd %zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

	// 포인터 변수 4 4 4 4 출력,  64bit 8 8 8 8 출력
	printf("%zd %zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c), sizeof(&d));

	// 주소값 4 4 4 4 출력, 64bit 8 8 8 8출력
	printf("%zd %zd %zd %zd\n", sizeof(a_ptr), sizeof(b_ptr), sizeof(c_ptr), sizeof(d_ptr));
	// 4 4 4 4 출력, 64bit 8 8 8 8출력
	printf("%zd %zd %zd %zd\n", sizeof(int*), sizeof(char*), sizeof(float*), sizeof(double*));
	
	return 0;
}