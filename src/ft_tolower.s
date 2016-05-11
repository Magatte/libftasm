# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/09 17:58:08 by pba               #+#    #+#              #
#    Updated: 2015/06/14 00:51:33 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_tolower

_ft_tolower:
	cmp		rdi, 'A' 
	jl		end0
	cmp		rdi, 'Z'
	jle		end1

end0:
	mov		rax, rdi
	ret

end1:
	mov		rax, rdi
	add		rax, 32
	ret
