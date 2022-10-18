#include "main.h"
/**
 * fill_short_oct_array - calculates a short octal number
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_short_oct_array(char *bnr, char *oct)
{
	int op, z, w, ioct, limit;

	oct[6] = '\0';
	for (z = 15, ioct = 5; z >= 0; z--, ioct--)
	{
		if (z > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, w = 1; w <= limit; w *= 2, z--)
			op = ((bnr[z] - '0') * w) + op;
		z++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
