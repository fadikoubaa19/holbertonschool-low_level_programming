#include "holberton.h"
int _islower(int c)
  /**
 *islower) - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
{
    if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (0);
	return (0);
}
