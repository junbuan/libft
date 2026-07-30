/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:59:23 by juho              #+#    #+#             */
/*   Updated: 2026/07/30 14:16:35 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
/*
int main(void)
{
	char buf[11] = "HelloWorld";
	
    ft_memset(buf + 5, 'X', 5);
    printf("%s\n", buf); // prints "HelloXXXXX"
	
    return 0;
}
*/