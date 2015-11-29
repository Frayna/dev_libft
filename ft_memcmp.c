/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:25:10 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/26 18:05:40 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (n == 0)
		return (0);
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while ((*ptr_s1 == *ptr_s2) && n > 1)
	{
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	if (*ptr_s1 > *ptr_s2)
		return (1);
	if (*ptr_s1 < *ptr_s2)
		return (-1);
	return (0);
}
