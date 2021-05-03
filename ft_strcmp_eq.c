#include "test.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int rdx;							//int i;
	const char *rdi = str1;
	const char *rsi = str2;	
	rdx = 0; 							//i = 0;
W:;
	char rcx = rsi[rdx];
	if ((rdi[rdx] - 0) == 0) goto E;	//while (str1[i])
	if ((rdi[rdx] - rcx) != 0) goto E;	//if (str1[i] != str2[i])
	rdx++;								//i++;
	goto W;
E:;
	int rax = rdi[rdx];
	rax -= rcx;
	return (rax);
}
