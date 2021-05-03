int ft_strlen(const char * str)
{
	int rdx;								//int i;
	const char *rdi = str;
	rdx = 0;								//i = 0;
W:	if ((rdi[rdx] - 0) == 0) goto E;		//while (str[i] != 0)
	rdx++;
	goto W;
E:											//	i++;
	return (rdx);
}
