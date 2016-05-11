# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/06 22:23:50 by pba               #+#    #+#              #
#    Updated: 2015/06/13 21:23:21 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global	_ft_bzero

_ft_bzero:
	mov		rax, rdi

	cmp		rdi, 0
	je		end

	cmp		rsi, 0
	je		end
	
	mov		rcx, rsi
	
putzero:
	mov		byte [rdi], 0
	inc		rdi
	loop	putzero 

end:
	ret
