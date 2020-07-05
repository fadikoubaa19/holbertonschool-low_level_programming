#include <stdio.h>
/**
 * main - check code please.
 *@argc: var
 *@argv: var.
 *Return: always 0.
 */
	int main(int argc, char *argv[])
	{
		int count;

		count = 0;
		argv[0] = "0";
		if (argc - 1 > 0)
		{
			for (count = 0; count < argc - 1; count++)
			{
			}
			printf("%d\n", count);
		}
		else if (count == 0)
		{
			printf("%s\n", argv[0]);
		}

		return (0);
}
