# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/09 17:29:31 by pba               #+#    #+#              #
#    Updated: 2015/06/13 20:56:24 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isprint

_ft_isprint:
	cmp		rdi, 32
	jb		end0
	cmp		rdi, 126
	jbe		end1

end0:
	mov		al, 0
	ret

end1:
	mov		al, 1
	ret
