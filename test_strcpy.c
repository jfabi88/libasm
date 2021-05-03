#include "test.h"

int test_strcpy2(const char *str)
{
	char *ret1;
	char *ret2;
	int i = 0;
	
	ret1 = malloc(strlen(str) +1);
	if (ret1 == 0)
		return (-1);
	ret2 = malloc(strlen(str) +1);
	if (ret2 == 0)
		return (-1);
	ret1 = strcpy(ret1, str);
	ret2 = ft_strcpy(ret2, str);
	while (ret1[i] && ret1[i] == ret2[i])
		i++;
	if (ret1[i] == 0 && ret2[i] == 0)
	{
		printf("Tuo risultato: %s [OK]  Corretto: %s\n", ret2, ret1);
		return (1); 
	}
	printf("Tuo risultato: %s [K0]  Corretto: %s\n", ret2, ret1);
	return (0);
}

void main()
{
	int i = 0;
	int res = 3;
	const char *str1 = "Rosso";
	const char *str2 = "";
	const char *str3 = "Prezzemolino di pozzo";
	i += test_strcpy2(str1);
	i += test_strcpy2(str2);
	i += test_strcpy2(str3);
	printf("\n");
	if (i == res)
		printf("Corretto %d/%d\n",i, res);
	else
		printf("Sbagliato %d/%d\n", i, res);
}
