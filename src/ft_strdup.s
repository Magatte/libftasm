# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 16:10:08 by pba               #+#    #+#              #
#    Updated: 2015/06/13 21:10:43 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strdup
	extern _ft_strlen
	extern _malloc
	extern _ft_memcpy

_ft_strdup:
	mov		rbx, rdi
	call	_ft_strlen
	mov		rdi, rax
	inc		rdi
	push	rdi

	call	_malloc
	cmp		rax, 0
	je		end

	mov		rdi, rax
	mov		rsi, rbx
	pop		rdx

	call	_ft_memcpy

end:
	ret
