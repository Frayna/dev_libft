/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:20:46 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/29 16:39:21 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out;
	char *tmp;

	if ((out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
	{
		tmp = out;
		while (*s)
		{
			*tmp = f(*s);
			tmp++;
			s++;
		}
		*tmp = '\0';
		return (out);
	}
	return (NULL);
}
