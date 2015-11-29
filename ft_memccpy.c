/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:53:12 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/26 18:13:43 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, void *restrict src, int c, size_t n)
{
	unsigned char *pt_dst;
	unsigned char *pt_src;

	pt_dst = (unsigned char *)dst;
	pt_src = (unsigned char *)src;
	while (*pt_src && *pt_src != (unsigned char)c && n)
	{
		*pt_dst = *pt_src;
		pt_dst++;
		pt_src++;
		n--;
	}
	if (*pt_src == (unsigned char)c)
	{
		*pt_dst = *pt_src;
		return (pt_dst + 1);
	}
	return (NULL);
}
