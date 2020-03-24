#include<stdio.h>

#define MONTHS 12
#define YEARS 3
/* 2차원 배열 연습문제 */
int main()
{
	double year2016[MONTHS] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
	double year2017[MONTHS] = { -1.8, -0.2,	6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
	double year2018[MONTHS] = { -4.0, -1.6,	8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };

	double year[YEARS][MONTHS] = { { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 },
								   { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 },
								   { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 } };

	/* 1. */
	printf("[Temperature Data]\n");

	printf("Year index : ");
	for (int i = 0; i < MONTHS; ++i) {
		printf("\t%d ", i + 1);
	}
	printf("\n");

	for (int j = 0; j < YEARS; ++j) {
		printf("Year %d \t :",j);
		for (int i = 0; i < MONTHS; ++i)
			printf("\t%.1lf", year[j][i]);
		printf("\n");
	}

	/* 2. */
	printf("\n[Yearly average temperatures of 3 years]\n");
	
	for (int j = 0; j < YEARS; ++j) {
		double avg = 0.0;
		printf("Year %d     :", j);
		for (int i = 0; i < MONTHS; ++i)
			avg += year[j][i];
		printf(" average temperature = %.1lf\n", avg / MONTHS);
	}
	printf("\n");

	/* 3. */
	printf("[Monthly average temperatures for 3 years]\n");
	printf("Year index : ");
	for (int i = 0; i < MONTHS; ++i) {
		printf("\t%d ", i + 1);
	}
	printf("\n");
	
	printf("Avg temps :\t");
	for (int i = 0; i < MONTHS; ++i) {
		double avg_months = 0.0;

		for (int j = 0; j < YEARS; ++j)
			avg_months += year[j][i];

		printf("%.1lf\t", avg_months / YEARS);
		
	}
	printf("\n");

}