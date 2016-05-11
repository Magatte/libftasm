# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 16:32:18 by pba               #+#    #+#              #
#    Updated: 2015/06/12 17:47:14 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global	_ft_memcpy

_ft_memcpy:
	mov		rax, rdi
	mov		rcx, rdx
	push	rsi

	cmp		rsi, 0
	je		end

	rep		movsb

end:
	pop		rsi
	ret
