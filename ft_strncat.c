/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:36:43 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/29 16:24:18 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char *tmp;

	tmp = dst;
	while (*dst != '\0')
		dst++;
	while (*src && n)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	*dst = '\0';
	return (tmp);
}
