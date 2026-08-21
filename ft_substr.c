/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:37:19 by juho              #+#    #+#             */
/*   Updated: 2026/08/21 17:18:07 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*pt1;
	size_t	i;
	size_t	j;
	size_t	slen;

	pt1 = (char *)s;
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	ptr = malloc(len + 1);
	i = start;
	j = 0;
	if (!ptr)
		return (NULL);
	while (j < len)
	{
		ptr[j] = pt1[i];
		i++;
		j++;
	}
	return (ptr[j] = '\0', ptr);
}
/*
int main(void)
{
	// char *s = av[1];
	// int start = atoi(av[2]);
	// int len = atoi(av[3]);
	char	*test =  ft_substr("hello", 0, 3);
	printf("%s\n", test);
	free(test);
}
*/