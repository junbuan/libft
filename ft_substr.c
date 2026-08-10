/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:37:19 by juho              #+#    #+#             */
/*   Updated: 2026/08/10 14:36:21 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*pt1;
	size_t	i;
	size_t	j;

	i = start;
	ptr = malloc(len + 1);
	pt1 = (char *)s;
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

