/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:34:04 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/24 10:24:00 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *out;
	char *tmp;

	if (!(out = (char *)malloc(sizeof(*s1) * ft_strlen(s1))))
		return (NULL);
	tmp = out;
	while (*s1)
	{
		*out = *s1;
		out++;
		s1++;
	}
	return (tmp);
}
