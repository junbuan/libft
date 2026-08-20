/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:50:01 by juho              #+#    #+#             */
/*   Updated: 2026/08/20 18:50:34 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(size_t));
	node->content = content;
	node->next = NULL;
	return (node);
}
