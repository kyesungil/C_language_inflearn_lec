#include<stdio.h>

/* 10.8 두 개의 포인터로 배열을 함수에게 전달해주는 방법 */

double average(double* start, double* end);

int main()
{
	double arr1[5] = { 10,13,12,7,8 };

	printf("Avg = %f\n", average(arr1, arr1 + 5));

	return 0;
}

double average(double* start, double* end) {
	
	int count = end  - start;
	double avg = 0.0;
	while (start < end) {
		avg += *start++;
		//count++;
	}
	avg /= (double)count;

	return avg;
}