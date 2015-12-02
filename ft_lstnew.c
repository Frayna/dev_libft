/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 21:14:11 by pgourran          #+#    #+#             */
/*   Updated: 2015/12/02 17:55:44 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = malloc(sizeof(t_list))))
	{
		if ((content) && ((new->content = ft_memalloc(content_size))))
		{
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
		}
		new->next = NULL;
		return (new);
	}
	return(NULL);
}
