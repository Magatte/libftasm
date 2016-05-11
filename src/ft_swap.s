# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_swap.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/13 21:24:12 by pba               #+#    #+#              #
#    Updated: 2015/06/14 15:35:33 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_swap

_ft_swap:
	mov		ecx, dword [rsi]
	mov		edx, dword [rdi]
	mov		dword [rdi], ecx
	mov		dword [rsi], edx

end:
	ret
