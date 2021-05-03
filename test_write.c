#include "test.h"

int test_write(const char *str)
{
	int ret1;
	int ret2;
	
	ret1 = write(1, str, strlen(str));
	ret2 = ft_write(1, str, strlen(str));
	if (ret1 != ret2)
		return (0);
	return (1);
}

int main()
{
	int i = 0;
	int res = 3;
	const char *str1 = "Rosso\n";
	const char *str2 = "";
	const char *str3 = "Prezzemolino di pozzo\n";
	i += test_write(str1);
	i += test_write(str2);
	i += test_write(str3);
	printf("\n");
	if (i == res)
		printf("Corretto %d/%d\n",i, res);
	else
		printf("Sbagliato %d/%d\n", i, res);
}
