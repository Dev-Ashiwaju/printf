#include "main.h"
/**
 * fill_long_oct_array - calculates a long octal number
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_long_oct_array(char *bnr, char *oct)
{
	int op, w, z, ioct, limit;

	oct[22] = '\0';
	for (w = 63, ioct = 21; w >= 0; w--, ioct--)
	{
		if (w > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, z = 1; z <= limit; z *= 2, w--)
			op = ((bnr[w] - '0') * z) + op;
		w++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
