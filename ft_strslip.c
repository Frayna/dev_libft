/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:20:23 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/25 20:10:14 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	dim_x(char const *s, char c)
{
	size_t x;

	x = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		s++;
		x++;
	}
	return (x);
}

static size_t	dim_y(char const *s, char c)
{
	size_t	y;

	y = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c && *s)
			s++;
		y++;
	}
	return (y);
}

char	**ft_strslip(char const *s, char c)
{
	char		*tmp;
	char		**out;
	size_t		X;
	size_t		Y;


	tmp = (char *)s;
	X = 0;
	Y = dim_y(s, c);
	if ((out = (char **)malloc(sizeof(out) * Y)))
	{
		Y = 0;
		while (*s)
		{
			tmp = (char *)s;
			if ((out[Y] = (char *)malloc(sizeof(*out) * dim_x(s, c) + 1)))
			{
				while (*s == c)
					s++;
				while (*s != c && *s)
				{
					out[Y][X] = *s;
					s++;
					X++;
				}
				out[Y][X] = '\0';
				X = 0;
				Y++;
			}
			else
				return (NULL);
		}
	}
	return (NULL);
}
