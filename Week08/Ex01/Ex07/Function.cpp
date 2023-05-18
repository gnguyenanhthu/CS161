#include"Function.h"

int sentences(char s[1000])
{
	int c = 0;
	s[0] = toupper(s[0]);
	for (int i = 0; i <= (strlen(s) - 1); ++i)
	{
		if (s[i] == '.')
		{
			++c;
			s[i + 2] = toupper(s[i + 2]);
		}
	}
	return c;
}

int words(char s[1000])
{
	int c = 1;
	for (int i = 0; i <= (strlen(s) - 1); ++i)
	{
		if (s[i] == ' ')
			++c;
	}
	return c;
}
