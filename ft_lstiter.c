/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 21:23:28 by pgourran          #+#    #+#             */
/*   Updated: 2015/12/02 17:59:24 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*ptr;

	while(lst->next)
	{
		ptr = lst->next;
		f(lst);
		lst = ptr;
	}
		f(lst);
}
