#include <stdio.h>

// test 1
void print_26_letter();
// test 2
void print_triangle();
// test 3
void triangle_letter1();
// test 4
void triangle_letter2();
// test 5
void triangle_letter3();
// test 6
void for_form();
// test 7
void reverse_word();
// test 8
void cal_two_float1();
// test 9
void cal_two_float2();
// test 10
void sum_top_down();
// test 11
void reverse_int_arr();
// test 12
void infinite_sequence();
// test 13
void int_pow();
// test 14
void sum_double();
// test 15
void reverse_char();
// test 16
void investment();
// test 17
void bonus1();
// test 18
void bonus2();


int main(int argc, char const *argv[])
{
	// test 1
	// print_26_letter();
	// test 2
	// print_triangle();
	// test 3
	// triangle_letter1();
	// test 4
	// triangle_letter2();
	// test 5
	// triangle_letter3();
	// test 6
	// for_form();
	// test 7
	// reverse_word();
	// test 8
	// cal_two_float1();
	// test 9
	// cal_two_float2();
	// test 10
	// sum_top_down();
	// test 11
	// reverse_int_arr();
	// test 12
	// infinite_sequence();
	// test 13
	// int_pow();
	// test 14
	// sum_double();
	// test 15
	// reverse_char();
	// test 16
	// investment();
	// test 17
	// bonus1();
	// test 18
	// bonus2();
	return 0;
}

// test 1
void print_26_letter()
{
	const char first_l = 'A';
	const char last_l= 'Z';

	char ch;
	int i;
	char letter[26];
	
	for (i = first_l, ch = first_l; i <= last_l; i++, ch++)
	{
		letter[i] = ch;
		printf("%c ", i, ch);
	}
	printf("\n");
	

}

// test 2
void print_triangle()
{
	const char ch = '$';

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		printf("%c", ch);
		printf("\n");
	}
}

// test 3
void triangle_letter1()
{
	for (int i = 'F'; i >= 'A'; i--)
	{
		int ch = 'F';
		
		for (int j = ch; j >= i; j--, ch--)
		printf("%c", ch);
		printf("\n");
	}
	
}

// test 4
void triangle_letter2()
{
	int ch = 'A';
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= i; j++, ch++)
		printf("%c", ch);
		printf("\n");
	}

}

// test 5
void triangle_letter3()
{
	char ch;

	printf("Enter a letter:");
	scanf("%c", &ch);

	for (int i = 0; i <= (ch - 'A'); i++)
	{
		for (int p = 'A'; p <= 'A' + i; p++)
		printf("%c", p);
		printf("\n");
	}

}

// test 6
void for_form();

// test 7
void reverse_word();

// test 8
void cal_two_float1();

// test 9
void cal_two_float2();

// test 10
void sum_top_down();

// test 11
void reverse_int_arr();

// test 12
void infinite_sequence();

// test 13
void int_pow();

// test 14
void sum_double();

// test 15
void reverse_char();

// test 16
void investment();

// test 17
void bonus1();
// test 18
void bonus2();