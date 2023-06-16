#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*new;
	int i = 0;

	while (s[i] != '\0')
		i++;
	new = malloc(sizeof(*new) * i + 1);
	i = 0;
	if (new != NULL)
	{
		while (s[i])
		{
			new[i] = s[i];
			i++;
		}
	}
	return (new);
}

int main(int argc, char **argv)
{
	char	*new;

	if (argc == 2)
	{
		new = ft_strdup(argv[1]);
		printf("%s\n", new);
	}
	return (0);
}
