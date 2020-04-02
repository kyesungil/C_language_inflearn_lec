#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
	char ch;
	int ch_count = 0, line_count = 0;
	int word_count = 0;
	bool word_flag = false;
	bool line_flag = false;

	printf("Enter text :\n");

	while ((ch = getchar()) != '.')
	{
		if (!isspace(ch))
			ch_count++;
			

		if (!isspace(ch) && !line_flag)
		{
			line_count++;
			line_flag = true;
		}

		if (ch == '\n')
			line_flag = false;
					

		if (!isspace(ch) && !word_flag)
		{
			word_count++;
			word_flag = true;
		}

		if (isspace(ch))
			word_flag = false;
	}

	printf("Characters = %d, Words = %d, Lines = %d", ch_count, word_count, line_count);



	return 0;
}