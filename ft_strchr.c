/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:38:42 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/25 02:44:45 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *out;

	out = (char *)s;
	while (*out)
	{
		if (*out == c)
			return (out);
		out++;
	}
	if (c == 0)
		return (out);
	return (NULL);
}
