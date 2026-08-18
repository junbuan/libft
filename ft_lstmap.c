/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 12:30:42 by juho              #+#    #+#             */
/*   Updated: 2026/08/18 16:45:42 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*temp;

	if ((!lst || !f))
		return (NULL);
	ans = NULL;
	temp = NULL;
	while (lst != NULL)
	{
		*temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, temp);
		lst = lst->next;
	}
	return (ans);
}