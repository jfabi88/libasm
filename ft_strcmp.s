global ft_strcmp

ft_strcmp:						;ft_strcmp(const char *str1, const char *str2)
	MOV RDX, 0					;int rdx = 0;
	XOR RAX, RAX
	XOR RCX, RCX
	XOR RBX, RBX
W:								;char rcx = str2[rdx];
	MOV CL, byte [RSI + RDX]
	MOV BL, byte [RDI + RDX]
	CMP BL, byte 0				;if ((rdi[rdx] - 0) == 0) goto E;	//while (str1[i])
	JE E
	CMP BL, CL					;if ((rdi[rdx] - rcx) != 0) goto E;
	JNE E
	INC RDX						;rdx++;
	JMP W						;goto W;
E:
	MOV AL, BL					;int rax = rdi[rdx];
	SUB RAX, RCX				;rax -= rcx;
	RET							;return (rax);
