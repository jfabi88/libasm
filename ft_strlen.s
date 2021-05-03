global ft_strlen

ft_strlen:									;int ft_strlen(const char * str)
	MOV RDX, 0							;int rdx = 0, const char *rdi = str;					
W:	
	CMP [RDI + RDX], byte 0					;if ((rdi[rdx] - 0) == 0) 
	JE E									;goto E;
	INC RDX									;rdx++;
	JMP W									;goto W;
E:	
	MOV RAX, RDX
	RET										;return (rdx);
