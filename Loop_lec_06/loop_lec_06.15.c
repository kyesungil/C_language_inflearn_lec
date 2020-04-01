#include<stdio.h>

int main()
{
	const int row_loop = 12;
	const char first_char = 'A';
	const char last_char = 'L';

	// 1.
	/*for (int i = 0; i < row_loop; ++i)
	{
		for (char i = first_char; i <= last_char; ++i)
			printf("%c ", i);
		printf("\n");
	}*/

	// 2.
	/*for (int r = 0; r < row_loop; ++r) 
	{
		for (char i = first_char; i < first_char + r; ++i)
			printf("%c ", i);
		printf("\n");
	}*/

	//3.
	for (int r = 0; r <= row_loop; ++r)
	{
		for (char i = first_char + r; i <= first_char + row_loop; ++i)
			printf("%c ", i);
		printf("\n");
	}

	return 0;
}