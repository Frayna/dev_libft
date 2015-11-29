/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:03:08 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/26 18:35:33 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *pt_s1;
	char *pt_s2;

	if (n == 0)
		return (0);
	pt_s1 = (char *)s1;
	pt_s2 = (char *)s2;
	while ((*pt_s1 == *pt_s2) && n > 1 && *pt_s1 && *pt_s2)
	{
		pt_s1++;
		pt_s2++;
		n--;
	}
	if ((unsigned char)*pt_s1 > (unsigned char)*pt_s2)
		return (1);
	if ((unsigned char)*pt_s1 < (unsigned char)*pt_s2)
		return (-1);
	return (0);
}
