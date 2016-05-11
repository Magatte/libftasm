# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/10 18:27:18 by pba               #+#    #+#              #
#    Updated: 2015/06/13 21:05:49 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strlen

_ft_strlen:
	mov		rax, 0

	cmp		rdi, 0
	je		end

	mov		rcx, -1
	mov		al, 0
	repnz	scasb
	mov		rax, rcx
	neg		rax
	sub		rax, 2

end:
	ret
