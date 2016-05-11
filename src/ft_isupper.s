# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/14 04:38:04 by pba               #+#    #+#              #
#    Updated: 2015/06/14 06:30:33 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isupper

_ft_isupper:
	cmp		rdi, 0
	je		false

	cmp		rdi, 'A'
	jb		false

	cmp		rdi, 'Z'
	jbe		true

false:
	mov		rax, 0
	ret

true:
	mov		rax, 1
	ret
