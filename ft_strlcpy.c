/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 12:56:41 by juho              #+#    #+#             */
/*   Updated: 2026/07/31 22:02:31 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *s);

size_t ft_strlcpy(char *dst, const char *src, int size)
{
    int len = ft_strlen(src);
    if (size > 0)
    {
        int i = 0;
        while (*src && i++ < size - 1)
            *dst++ = *src++;
        *dst = '\0';
    }
    return (len);
}

char   str[3];

str[0] = 'a';
str[1] = 'b';
str[2] = 'c';
