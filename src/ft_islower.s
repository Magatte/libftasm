# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_islower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/13 17:54:08 by pba               #+#    #+#              #
#    Updated: 2015/06/14 16:00:49 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_islower

_ft_islower:
	cmp		rdi, byte 0
	je		false

	cmp		rdi, byte 'a'
	jb		false

	cmp		rdi, byte 'z'
	jbe		true

false:
	mov		rax, 0
	ret

true:
	mov		rax, 1
	ret

