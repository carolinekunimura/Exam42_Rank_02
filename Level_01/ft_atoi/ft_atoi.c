#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num = 0;
	int	sign = 1;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}

int	main(int argc, char **argv)
{
	int num = 0;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		printf("%i\n", num);
	}
	return (0);
}
