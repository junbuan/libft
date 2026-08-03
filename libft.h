/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:00:41 by juho              #+#    #+#             */
/*   Updated: 2026/08/03 23:15:54 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isdigit(int nb);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
void			ft_bzero(void *s, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s1);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);

#endif