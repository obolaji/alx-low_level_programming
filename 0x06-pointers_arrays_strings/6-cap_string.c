#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @k: string to be capitalised
 *
 * Return: String with all characters capitalised
 */

char *cap_string(char *k)
{
	int i = 0;
	
	while (k[i])
	{
		while (! (k[i] >= 'a' && k[i] <= 'z'))
			i++;
		if (k[i - 1] == ' ' ||
		    k[i - 1] == '\t' ||
		    k[i - 1] == '\n' ||
		    k[i - 1] == ',' ||
		    k[i - 1] == ';' ||
		    k[i - 1] == '.' ||
		    k[i - 1] == '!' ||
		    k[i - 1] == '?' ||
		    k[i - 1] == '"' ||
		    k[i - 1] == '(' ||
		    k[i - 1] == ')' ||
		    k[i - 1] == '{' ||
		    k[i - 1] == '}' ||
		    i == 0)
			k[i] -= 32;
		i++;
	}

	return(k);
}
			
