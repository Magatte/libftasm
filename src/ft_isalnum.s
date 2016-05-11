# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/09 17:14:10 by pba               #+#    #+#              #
#    Updated: 2015/06/14 00:38:22 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isalnum

_ft_isalnum:
	cmp		rdi, '0'
	jb		end0
	cmp		rdi, '9'
	jbe		end1
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
