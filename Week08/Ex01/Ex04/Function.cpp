#include"Function.h"

int vowels(char s[256])
{
	int c=0;
	for (int i = 0; s[i] != '\0'; ++i)
	{
		if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'i'))
			++c;
	}
	return c;
}