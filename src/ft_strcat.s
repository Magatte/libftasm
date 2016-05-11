# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:21:02 by pba               #+#    #+#              #
#    Updated: 2015/06/14 06:44:31 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strcat

_ft_strcat:
	mov		rax, rdi
	cmp		rsi, 0
	je		end

run_to_end:
	cmp		[rdi], byte 0
	je		concat
	inc		rdi
	jmp		run_to_end

concat:
	cmp		[rsi], byte 0
	je		end
	mov		cl, [rsi]
	mov		[rdi], cl
	inc		rdi
	inc		rsi
	jmp		concat

end:
	mov		[rdi], byte 0
	ret
