# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_cat.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/14 00:24:46 by pba               #+#    #+#              #
#    Updated: 2015/06/14 00:36:12 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
	new		db 1

section .text
	global	_ft_cat

_ft_cat:
	push	rdi
	mov		rcx, rdi
	jmp		looping

looping:
	mov		rax, 0x2000003
	lea		rsi, [rel new]
	mov		rdx, 1
	syscall
	jc		error

	cmp		rax, 0
	je		end

	push	rdi

	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel new]
	mov		rdx, 1
	syscall

	cmp		rax, 0
	jl		end

	pop		rdi
	jmp		looping

error:
	mov		rax, 0x2000004
	mov		rdi, 2
	lea		rsi, [rel msg_error]
	mov		rdx, 35
	syscall
	pop		rdi
	ret

msg_error:
	db "ft_cat: stdin: Bad file descriptor", 10

end:
	pop		rdi
	mov		rax, 0
	ret
