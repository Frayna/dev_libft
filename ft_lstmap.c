/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 21:34:13 by pgourran          #+#    #+#             */
/*   Updated: 2015/12/02 18:58:26 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *ptr;

	if (lst && f)
	{
		new = f(lst);
		ptr = new;
	}
	while(lst->next)
	{
		new->next = f(lst->next);
		lst = lst->next;
		new = new->next;
	}
//	new = f(lst);
	if (ptr)
		return(ptr);
	return(NULL);
}

