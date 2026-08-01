/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:59:39 by juho              #+#    #+#             */
/*   Updated: 2026/08/01 13:29:35 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	dstlen;
    size_t	srclen;
    size_t	i;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen((char *)src);
    if (dstlen >= size)
        return (srclen + size);
    i = 0;
    while (src[i] && (dstlen + i + 1) < size)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return (srclen + dstlen);
}