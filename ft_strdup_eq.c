#include "test.h"

char *ft_strdup(const char *str)
{
	int rdi = 0;				//int i = 0;
	const char *rdx = strdup(str);	//char	*dst;
	
W1:
	if (rdx[rdi] == 0) goto M;	//while (str[i] != 0)
	rdi++;						//i++;
	goto W1;
M:
	rdi++;
	char *rax = malloc(rdi);	//dst = malloc(sizeof(char) * (i + 1));
	if (rax == 0) goto error;	//if (dst == 0)
	char *rbx = rax;
	rdi = 0;					//i = 0;
W2:
	if (rdx[rdi] == 0) goto E;	//while (str[i] != 0)
	rbx[rdi] = rdx[rdi];	 	//dst[i] = str[i];
	rdi++;						//i++;
	goto W2;
E:
	rbx[rdi] = 0;				//dst[i] = 0;
	rax = rbx;
	return (rax);
error:
	return (rax);				//return (0);
}
