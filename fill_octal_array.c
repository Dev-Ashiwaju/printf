#include "main.h"
/**
 * fill_oct_array - writes the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_oct_array(char *bnr, char *oct)
{
	int op, w, z, ioct, limit;

	oct[11] = '\0';
	for (w = 31, ioct = 10; w >= 0; w--, ioct--)
	{
		if (w > 1)
			limit = 4;
		else
			limit = 2;
		for (op = 0, z = 1; z <= limit; z *= 2, w--)
			op = ((bnr[w] - '0') * z) + op;
		w++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
