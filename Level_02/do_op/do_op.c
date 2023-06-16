#include "do_op.h"

int main(int argc, char **argv)
{
	int n1 = 0;
	int n2 = 0;
	int result = 0;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if (*argv[2] == '*')
			result = n1 * n2;
		else if (*argv[2] == '-')
			result = n1 - n2;
		else if (*argv[2] == '/')
			result = n1 / n2;
		else if (*argv[2] == '%')
			result = n1 % n2;
		else if (*argv[2] == '+')
			result = n1 + n2;
		printf("%i", result);
	}
	printf("\n");
	return (0);
}
