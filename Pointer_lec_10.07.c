#include<stdio.h>

/* 10.7 배열을 함수에게 전달해주는 방법 */

double average(double* arr1, int n);

/* <prototype>
doube average(double *arr, int n);
doube average(double *, int n);
doube average(double arr[], int n);
doube average(double [], int n);
*/


int main()
{
	double arr1[5] = { 10,13,12,7,8 };
	//double arr2[5] = { 1.8,-0.2,6.3,13.9,20.5 };
	double arr2[3] = { 1.8,-0.2,6.3 }; /* average 매개변수로 들어갔을 때 */

	printf("Adress = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1)); // 40byte (8 * 5)
	printf("Adress = %p\n", arr2);
	printf("Size = %zd\n", sizeof(arr2)); // 24byte (8 * 3)

	
	printf("Avg = %f\n", average(arr1,5));
	printf("Avg = %f\n", average(arr2,3));


	return 0;
}


double average(double* arr1, int n) {

	printf("Size = %zd in function average\n", sizeof(arr1)); /* pointer의 size(32bit일때, 4byte)가 나온다. 배열의 이름은 포인터와 유사,
															  배열은 특성상 데이터가 많기 때문에 배열을 통째로 복사해서 가져오지 않고,
															  포인터로 받을려고 한다. 배열은 포인터로 받는다. ,, ******배열의 원소를 따로 받아줘야한다.
															  ,arr[100] 해도 크기는 4byte*/
	double avg = 0.0;
	for (int i = 0; i < n; ++i) {
		avg += arr1[i];
	}
	avg /= (double)n;

	return avg;
}