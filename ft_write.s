global ft_write

ft_write:
	MOV RAX, 0x01
	syscall
	RET
