#include "test.h"

int test_strcmp(const char *str1, const char *str2)
{
	int ret1;
	int ret2;
	
	ret1 = strcmp(str1, str2);
	ret2 = ft_strcmp(str1, str2);
	if (ret1 != ret2)
	{
		printf("Tuo risultato: %d [KO]  Corretto: %d\n", ret2, ret1);
		return (0); 
	}
	printf("Tuo risultato: %d [OK]  Corretto: %d\n", ret2, ret1);
	return (1);
}

void main()
{
	int i = 0;
	int res = 8;
	const char *str1 = "Rosso";
	const char *str2 = "";
	const char *str3 = "Prezzemolino di pozzo";
	i += test_strcmp(str1, str2);
	i += test_strcmp(str2, str1);
	i += test_strcmp(str3, str1);
	i += test_strcmp(str1, str3);
	i += test_strcmp(str3, str2);
	i += test_strcmp(str2, str3);
	i += test_strcmp(str3, str3);
	i += test_strcmp(str2, str2);
	printf("\n");
	if (i == res)
		printf("Corretto %d/%d\n",i, res);
	else
		printf("Sbagliato %d/%d\n", i, res);
}
