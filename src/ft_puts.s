# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/10 12:52:04 by pba               #+#    #+#              #
#    Updated: 2015/06/14 01:22:28 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
	new_line	db 10

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	cmp		rdi, 0
	je		nothing

msg:
	push	rdi
	call 	_ft_strlen
	mov		rdx, rax
	pop		rsi
	mov		rdi, 1
	mov		rax, 0x2000004
	syscall
	jc		error

back_n:
	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel new_line]
	mov		rdx, 1
	syscall
	jc		error
	jmp		end

nothing:
	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel nothing_msg]
	mov		rdx, 7
	syscall
	jc		error
	jmp		end

nothing_msg:
	db "(null)", 10

error:
	mov		rax, -1
	ret

end:
	ret
