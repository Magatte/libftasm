# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 15:13:37 by pba               #+#    #+#              #
#    Updated: 2015/06/14 01:02:44 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_memset

_ft_memset:
	mov		rax, rdi
	cmp		rdi, 0
	je		end

	cmp		rdx, 0
	je		end

	push	rdi
	mov		rcx, rdx
	mov		al, sil
	rep		stosb
	pop		rax

end:
	ret
