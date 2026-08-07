/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 21:30:40 by juho              #+#    #+#             */
/*   Updated: 2026/08/07 17:41:25 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t len;
	char * newstr;
	len = ft_strlen(s1);
	i = 0;
	j = 0;
	
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
		}
		
		if (s1[len] == set[j])
		{
			len--;
		}
		
		while (set[j] != '\0')
		{
			j++;
		}
	}
	
	
	
}
