#include "test.h"

int test_strlen(const char *str)
{
	int ret1;
	int ret2;
	
	ret1 = strlen(str);
	ret2 = ft_strlen(str);
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
	int res = 3;
	const char *str1 = "Rosso";
	const char *str2 = "";
	const char *str3 = "Prezzemolino di pozzo";
	i += test_strlen(str1);
	i += test_strlen(str2);
	i += test_strlen(str3);
	printf("\n");
	if (i == res)
		printf("Corretto %d/%d\n",i, res);
	else
		printf("Sbagliato %d/%d\n", i, res);
}
