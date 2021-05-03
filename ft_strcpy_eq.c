#include "test.h"

char *ft_strcpy(char *dest, const char *src)
{
	int rcx = 0;								//int i = 0;
	char *rdi = dest;
	const char *rsi = src;

W:
	if ((rsi[rcx] - 0) == 0) goto E;			//while (src[i] != 0)
	rdi[rcx] = rsi[rcx];						//dest[i] = src[i];
	rcx++;										//i++;
	goto W;
E:
	dest[rcx] = 0;
	return (dest);
}
