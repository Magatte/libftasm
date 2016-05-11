# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/09 04:32:31 by pba               #+#    #+#              #
#    Updated: 2015/06/13 20:56:51 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isalpha

_ft_isalpha:
	cmp		rdi, 'A'
	jb		end0
	cmp		rdi, 'Z'
	jbe		end1
	cmp		rdi, 'a'
	jb		end0
	cmp		rdi, 'z'
	jbe		end1

end0:
	mov		al, 0
	ret

end1:
	mov		al, 1
	ret
