/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 21:30:40 by juho              #+#    #+#             */
/*   Updated: 2026/08/07 19:30:44 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	size_t k;

	if (!set)
		return (0);
	k = 0;
	while (set[k])
	{
		if (set[k] == c)
			return (1);
		k++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*newstr;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (start < len && in_set(s1[start], set))
		start++;
	/* if the whole string is trimmed, return empty string */
	if (start == len)
	{
		newstr = (char *)malloc(1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	end = len - 1;
	while (end > start && in_set(s1[end], set))
		end--;
	newstr = (char *)malloc(end - start + 2);
	if (!newstr)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		newstr[i++] = s1[start++];
	}
	newstr[i] = '\0';
	return (newstr);
}
