/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 00:25:01 by juho              #+#    #+#             */
/*   Updated: 2026/08/08 00:53:00 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	j = 0;
	i = 0;
	len = ft_strlen(s1);
	
	if (s1 || set == NULL)
		return (NULL);
	while (set[j] != '\0')
	{
		if (set[j] == s1[i])
		{
			i++;
		}
		j++
	}
}
