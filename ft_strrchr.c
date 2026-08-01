/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:00:22 by juho              #+#    #+#             */
/*   Updated: 2026/08/01 17:53:14 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	target;

	target = (char)c;
	i = ft_strlen(s);
	if (target == '\0')
		return ((char *)(&s[i]));
	while (i >= 0)
	{
		if (s[i] == target)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char a[] = "hi";
	printf("%p\n", strrchr(a, '\0'));
	printf("%p\n", ft_strrchr(a, '\0'));
}

*/