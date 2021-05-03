global ft_strcmp

ft_strcmp:
		push	r10
		mov		r10, -1				; i = -1
loop:	inc		r10					; i++
		mov		al, byte [rdi+r10]	; al = str1[i]
		mov		bl, byte [rsi+r10]	; bl = str2[i]
		cmp		al, 0				; if al == 0
		je		end				; then zero
		cmp		bl, 0				; if bl == 0
		je		end				; then zero
		cmp		al, bl				; if al == bl
    	je		loop				; then loop
		jmp		end

end:
	pop		r10
	sub		rax, rbx
	ret
