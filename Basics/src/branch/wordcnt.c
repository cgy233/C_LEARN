#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(int argc, char const *argv[])
{
	char c;
	char prev;
	long n_chars = 0L;
	
	int n_lines = 0; // 行数
	int n_words = 0; // 单词数
	int p_lines = 0; // 不完整的行数
	
	bool inword = false; // 如果c在单词中，in word 等于 true

	printf("Enter text to be analyzed(| to terminate):\n");
	prev = '\n';
	while ((c = getchar()) != STOP)
	{
		n_chars++; // 统计字符
		if (c == '\n')
		n_lines++; // 统计行

		if(!isspace(c) && !inword)
		{
			inword = true; // 开始一个新的单词
			n_words++;
		}
		if (isspace(c) && inword)
		inword = false;
		prev = c;
	}
	if (prev != '\n')
	p_lines = 1;
	printf("characters=%ld, word = %d, lines = %d,",
	n_chars, n_words, n_lines);

	return 0;
}
