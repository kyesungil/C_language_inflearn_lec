#include<stdio.h>
#include<math.h>

int main()
{
	const double PI = 3.141592;
	double guess = 0.0;

	printf("Input PI : ");
	scanf("%lf", &guess);
	while (fabs(guess - PI) > 0.01) // fabs 절대값
	{
		printf("Fool! try again.\n");
		scanf("%lf", &guess);
	}

	printf("Good!");
	return 0;
}