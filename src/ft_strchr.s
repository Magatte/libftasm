# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strchr.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/13 21:27:31 by pba               #+#    #+#              #
#    Updated: 2015/06/14 16:54:40 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
null:
        .string db "(null)"
section .text
    global _ft_strchr

_ft_strchr:
    cmp		[rdi], byte 0
    je 		nomatch
    jmp		looping

looping:
    cmp 	[rdi], byte 0
    je 		nomatch
    mov 	rax, rsi
    cmp 	byte [rdi], al
    je		fin
    inc 	rdi
    jmp 	looping

nomatch:
    lea 	rax, [rel null.string]
    ret

fin:
    mov 	rax, rdi
    ret
