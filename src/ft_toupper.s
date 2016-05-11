# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/09 17:33:52 by pba               #+#    #+#              #
#    Updated: 2015/06/14 00:52:06 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_toupper

_ft_toupper:
	cmp		rdi, 'a'
	jb		end0
	cmp		rdi, 'z'
	jbe		end1

end0:
	mov		rax, rdi
	ret

end1:
	mov 	rax, rdi
	sub		rax, 32
	ret
