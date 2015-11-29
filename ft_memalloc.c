/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 02:56:00 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/25 03:40:25 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*out;
	unsigned char	*tmp;

	if ((out = malloc(size)))
	{
		tmp = (unsigned char *)out;
		while (size != 0)
		{
			*tmp = 0;
			tmp++;
			size--;
		}
		return (out);
	}
	return (NULL);
}
