# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/13 21:23:43 by pba               #+#    #+#              #
#    Updated: 2015/06/14 16:01:38 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strcpy
	extern _ft_strlen

_ft_strcpy:
	push	rsi
	cmp		[rsi], byte 0
	je		end

	mov		rdx, rdi
	mov		rdi, rsi
	call	_ft_strlen
	mov		rcx, rax
	inc		rcx
	mov		rdi, rdx
	mov		rax, rdi
	cld
	rep		movsb

end:
	pop		rsi
	ret
