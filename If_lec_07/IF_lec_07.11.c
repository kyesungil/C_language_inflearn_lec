#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>

int main()
{
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input;
	int n = 0;

	while (scanf("%f", &input) == 1)
	{
		if (input < 0 || input > 100) 
			continue;

		max = (input > max) ? input : max;
		min = (input < min) ? input : min;

		sum += input;

		n++;
	}

	if (n > 0)
		printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
	else
		printf("No input\n");

	return 0;
}

/*bool init = false;
	int number;
	int sum = 0, count = 0;
	double ave = 0.0;
	int max = 0, min = 0;

	while ((scanf("%d", &number)) == 1)
	{
		if (!init)
		{
			min = number;
			max = number;
			init = true;
		}

		sum += number;

		if (number >= max)
		{
			max = number;
		}

		if (number <= min)
			min = number;

		count++;
	}

	ave = sum / count;
	printf("min = %d, max = %d, ave = %lf", min, max, ave);*/
