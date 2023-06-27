#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int i, l, t;

	l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
