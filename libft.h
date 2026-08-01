/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:00:41 by juho              #+#    #+#             */
/*   Updated: 2026/08/01 18:47:46 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isdigit(int nb);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
void ft_bzero(void *s, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_strlen(const char *s1);

#endif