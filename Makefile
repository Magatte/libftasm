# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/13 21:14:23 by pba               #+#    #+#              #
#    Updated: 2015/06/14 18:01:59 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : clean fclean re test name all

NASM 		= ~/.brew/Cellar/nasm/2.11.08/bin/nasm
CC_FLAG		= -Wall -Werror -Wextra
MAIN		= main_test
NFLAGS 		= -f macho64
LFLAGS 		= -macosx_version_min 10.8 -lSystem
NAME		= libfts.a
HPATH 		= ./include/
SPATH 		= ./src/
SRC 		= ft_bzero.s \
	  		ft_strcat.s \
	  		ft_isalnum.s \
	  		ft_isalpha.s \
	 		ft_isdigit.s \
	  		ft_isascii.s \
	  		ft_isprint.s \
	  		ft_tolower.s \
	  		ft_toupper.s \
	  		ft_puts.s \
	  		ft_strlen.s \
	  		ft_memcpy.s \
	  		ft_memset.s \
	 		ft_strdup.s \
	  		ft_cat.s \
			ft_islower.s \
			ft_isupper.s \
			ft_strcpy.s \
			ft_strchr.s \
			ft_swap.s 

OBJ 		= $(SRC:%.s=%.o)

SRCS 		= $(addprefix $(SPATH), $(SRC))
OBJ 		:= $(addprefix $(SPATH), $(OBJ))

all: $(NAME) test

$(NAME): $(OBJ)
	@echo "Compiling $(NAME)..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32;01mLibrary \"libfts.a\" created !\033[0m"

%.o : %.s
	@$(NASM) $(NFLAGS) $< -o $@ -I $(HPATH)
clean:
	@rm -rf $(OBJ)
	@echo "\033[1;31mObjects deleted\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(MAIN)
	@echo "\033[1;31mmain_test deleted\033[0m"
	@echo "\033[32;01mThe Folder is clean\033[0m"

re: fclean all

test:
	gcc $(CC_FLAG) -o $(MAIN) main.c -L./ -lfts -I./include/
	echo "$(MAIN) is done !"
	./$(MAIN)
