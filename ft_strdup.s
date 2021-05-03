extern malloc
global ft_strdup

ft_strdup:					;char *ft_strdup(const char *str)
	MOV RDX, RDI			;const char *rdx = strdup(str);
	PUSH RDI
	PUSH RSI
	XOR RDI, RDI			;int rdi = 0;
W1:
	CMP [RDX + RDI], byte 0	;if (rdx[rdi] == 0) goto M;
	JE M
	INC RDI					;rdi++;
	JMP W1					;goto W1;
M:
	INC RDI					;rdi++;
	call malloc				;char *rax = malloc(rdi);
	CMP RAX, 0				;if (rax == 0) goto error;
	JE error
	MOV RBX, RAX			;char *rbx = rax;
	XOR RDI, RDI			;rdi = 0;
W2:
	CMP [RDX + RDI], byte 0	;if (rdx[rdi] == 0)
	JE E					;goto E;
	XOR RCX, RCX
	MOV CL, byte [RDX + RDI] 	
	MOV byte [RBX + RDI], CL	;rbx[rdi] = rdx[rdi];
	INC RDI					;rdi++;						
	JMP W2					;goto W2;
E:
	MOV [RBX + RDI], byte 0		;rbx[rdi] = 0;
	MOV RAX, RBX			;rax = rbx;
	POP RSI
	POP RDI
	RET						;return (rax);
error:
	POP RSI
	POP RDI
	RET						;return (rax);
