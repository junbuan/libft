/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:37:19 by juho              #+#    #+#             */
/*   Updated: 2026/08/05 15:25:28 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	
	char *ptr;
	char *pt1;
	size_t i;
	size_t j;

	i = start;
	ptr = malloc(len + 1);
	pt1 = (char *)s;
	i = 0;
	
	while (i < len)
	{
		ptr[j] =  pt1[i];
		i++;
		j++;
	} 
	return(ptr + '\0');
}

#include <stdio.h>
#include <stdlib.h>

 int main(void)
 {
	// char *s = av[1];
	// int start = atoi(av[2]);
	// int len = atoi(av[3]);

	printf("%s\n", ft_substr("hello", 0, 3));
 }
