#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main()
{
	unsigned num;
	int isPrime;

	//scanf("%u", &num);
	while (scanf("%u", &num) == 1)
	{
		// 소수 1,2,3,7 소수가 아니면 0
		/*if ((num % 2 == 0 || num % 3 == 0) && (num != 1) && (num != 2) && (num != 3))
			isPrime = 0;
		else
			isPrime = 1;*/

		isPrime = true;

		for (unsigned div = 2; (div*div) <= num; ++div)
		{
			if (num % div == 0)
			{
				isPrime = false;
				if(num == div * div)
					printf("%u is divisible by %u\n", num, div);
				else
					printf("%u is divisible by %u and %u.\n", num, div, num / div);
			}
				
		}
		if (isPrime)
			printf("%u is a prime number.\n", num);
		else
			printf("not prime number.\n");
	}
	return 0;
}