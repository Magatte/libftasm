/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 22:05:01 by pba               #+#    #+#             */
/*   Updated: 2015/06/14 17:00:12 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H
	
# include <stdlib.h>
# include <ctype.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

/*
 ** PART1
*/
void			ft_bzero(void *s, size_t n);
char			*ft_strcat(char *s1, char *s2);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_puts(char *s);
/*
 ** PART2
*/
size_t			ft_strlen(char *str);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dst, void *src, size_t n);
char			*ft_strdup(char *s1);
/*
 ** PART3
*/
void			ft_cat(int fd);
/*
 ** BONUS
*/
void			ft_swap(int *a, int *b);
int				ft_islower(int c);
int				ft_isupper(int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strchr(const char *s, int c);

#endif
