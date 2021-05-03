#include "test.h"

char *ft_strdup(const char *str)
{
	int i;
	char	*dst;
	
	i = 0;
	while (str[i] != 0)
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == 0)
		return (0);
	i = 0;
	while (str[i] != 0)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
