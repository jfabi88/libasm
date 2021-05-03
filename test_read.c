#include "test.h"

int test_read(int nmb)
{
	int ret1;
	int ret2;
	int	fd;
	char *buffer1;
	char *buffer2;
	
	buffer1 = malloc(sizeof(char) * (nmb + 1));
	buffer2 = malloc(sizeof(char) * (nmb + 1));
	fd = open("file.txt", O_RDONLY);
	ret1 = read(fd, buffer1, nmb);
	fd = open("file.txt", O_RDONLY);
	ret2 = ft_read(fd, buffer2, nmb);
	printf("La sua stringa: %s\nLa mia stringa: %s\n", buffer1, buffer2);
	if (ret1 != ret2)
		return (0);
	return (1);
}

int main()
{
	int nmb;
	int i = 0;
	int res = 3;
	
	nmb = 3;
	i += test_read(nmb);
	nmb = 79;
	i += test_read(nmb);
	nmb = 0;
	i += test_read(nmb);
	if (i == res)
		printf("Corretto %d/%d\n", i, res);
	else
		printf("Sbagliato %d/%d\n", i, res);
}
