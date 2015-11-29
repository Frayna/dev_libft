/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:45:24 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/29 18:25:10 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *out;

	if ((out = (char *)ft_memalloc(size)))
	{
/*		pt_out = out;
		while (size)
		{
			*pt_out = '\0';
			pt_out++;
			size--;
		}
*/		return (out);
	}
	return (NULL);
}
