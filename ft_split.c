/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 14:14:22 by juho              #+#    #+#             */
/*   Updated: 2026/08/19 21:01:28 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isdelimiter(char c, char delimiter)
{
	return (c == delimiter);
}
static int	count_word(char const	*s, char delimiter)
{
	int	count;
	int i;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		while (isdelimiter(s[i], delimiter))
		i++;
		if (s[i])
		{
			count++;
			while (s[i] && !isdelimiter(s[i], delimiter))
			i++;
		}
	}
	return (count);
}
char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char **ptr;
	int count;
	
	count = count_word(s, c);
	*ptr = malloc(sizeof(char *) * (count_word(s,c) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		j = i;
		while (s[i] != c && s[i])
		{
			i++;
		}
		count = 0;
		while (count < count_word(s,c))
			ptr[count++] = malloc(sizeof(i - j));
	}
	return (ptr);
}
