#include <stdio.h>
#include <ctype.h>

#define STOP '#'

//test 1
void space_ct();
//test 2
void char_num();
//test 3
void odd_even_ct();
//test 4
void replace_sigh1();
//test 5
void replace_sigh2();
//test 6
void ei_ct();
//test 7
void cal_wages1();
//test 8
void cal_wages2();
//test 9
void plus_prime();
//test 10
void tax_revenue();
//test 11
void shop();

int main(int argc, char const *argv[])
{
	//test 1
	void space_ct();
	//test 2
	char_num();
	//test 3
	// void odd_even_ct();
	//test 4
	// void replace_sigh1();
	//test 5
	// void replace_sigh2();
	//test 6
	// void ei_ct();
	//test 7
	// void cal_wages1();
	//test 8
	// void cal_wages2();
	//test 9
	// void plus_prime();
	//test 10
	// void tax_revenue();
	//test 11
	// void shop();

	return 0;
}

//test 1
void space_ct()
{
	char ch;
	char prev;

	int n_other_char = 0;
	int n_space_char = 0;
	int n_lines = 0;

	printf("Enter text to be analyzed(# to terminate:)\n");

	while((ch = getchar()) != STOP)
	{
		if (ch == '\n')
		n_lines++;
		else if (isspace(ch))
		n_space_char++;
		else
		n_other_char++;
	}
	printf("Space = %d, Line feed = %d, Other charater = %d",
	n_space_char, n_lines, n_other_char);
}

//test 2
void char_num()
{
	
}

//test 3
void odd_even_ct();

//test 4
void replace_sigh1();

//test 5
void replace_sigh2();

//test 6
void ei_ct();

//test 7
void cal_wages1();

//test 8
void cal_wages2();

//test 9
void plus_prime();

//test 10
void tax_revenue();

//test 11
void shop();
