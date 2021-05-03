global ft_strcpy

ft_strcpy:							;char *ft_strcpy(char *dest, const char *src)
	MOV RCX, 0						;int rcx = 0;					int i = 0;
W:
	CMP [RSI + RCX], byte 0			;if ((rsi[rcx] - 0) == 0) goto E;
	JE E
	MOV RDX, [RSI + RCX]
	MOV [RDI + RCX], RDX			;rdi[rcx] = rsi[rcx];						
	INC RCX							;rcx++;
	JMP W							;goto W;
E:
	MOV [RDI + RCX], byte 0			;dest[rcx] = 0
	MOV RAX, RDI
	RET								;return (dest);
