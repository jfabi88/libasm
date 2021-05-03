#include "test.h"

int test_strdup(const char *str)
{
	char *dst;
	char *dst2;
	
	dst = strdup(str);
	dst2 = ft_strdup(str);
	printf("La sua stringa: %s\nLa mia strigna: %s\n", dst, dst2);
	if (!(strcmp(dst, str)))
		return(1);
	return (0);
}

int main()
{
	int i = 0;
	int res = 3;
	
	const char *str = "occhio";
	i += test_strdup(str);
	str = "";
	i += test_strdup(str);
	str ="Il facocero\n bello";
	i += test_strdup(str);
	if (i == res)
		printf("Corretto: %d/%d\n", i, res);
	else
		printf("Sbagliato: %d/%d\n", i, res);
}
