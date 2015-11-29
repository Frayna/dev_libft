/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:40:32 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/24 23:45:41 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dst;

	ptr_dst = (unsigned char *)dst;
	while ((*ptr_dst != c) && n)
	{
		*ptr_dst = *((unsigned char *)src);
		ptr_dst++;
		src++;
		n--;
	}
	if (*ptr_dst == c)
		return (ptr_dst);
	return (NULL);
}
