/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:18:44 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/30 17:34:32 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*tmp;

	tmp = dst;
	while (*src && n)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	while (n != 0)
	{
		*dst = '\0';
		dst++;
		n--;
	}
	return (tmp);
}
