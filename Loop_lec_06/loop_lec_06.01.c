#include<stdio.h>

int main()
{
	int i, sum = 0;
	//int status;

	printf("Enter an integer (q to quit) : ");

	//status = scanf("%d", &i); // 입력받은 변수의 개수를 return해줌.
	
	while (scanf("%d", &i) == 1)
	{
		sum += i;
		printf("Enter next integer (q to quit) : ");
		//status = scanf("%d", &i);
		
	}
	printf("Sum = %d", sum);

	return 0;
}