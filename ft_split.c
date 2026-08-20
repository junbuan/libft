/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 14:14:22 by juho              #+#    #+#             */
/*   Updated: 2026/08/20 21:52:16 by juho             ###   ########.fr       */
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
static char	*ft_get_word(char const *s, char d, size_t *i)
{
	size_t	start;

	start = *i;
	while (s[*i] && !isdelimiter(s[*i], d))
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && isdelimiter(s[i], c))
			i++;
		if (s[i])
		{
			arr[j] = ft_get_word(s, c, &i);
			j++;
		} 
	}
	arr[j] = NULL;
	return (arr);
}
