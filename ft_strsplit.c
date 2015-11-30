/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:07:39 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/30 19:01:43 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tonext(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] == c)
		i++;
	return(i);
}


static int evalx(char *s, char c)
{
	int i;

	i = 0;
	while(s[i] != c)
		i++;
	return(i);
}
static int evaly(char *s, char c)
{
	int y;
	int i;

	i= 0;
	y = 0;
	while(s[i])
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		if ((s[i - 1] != c) || (s[i] != '\0'))
			y++;
	}
		return (y);
}


char			**ft_strsplit(char const *s, char c)
{
	int i;
	int y;
	int x;
	char **out;

	i = 0;
	y = evaly((char *)s,c);
	out = (char **)ft_memalloc(sizeof(char *) * y + 1);
	while (y > i)
	{
		if ((*s != c) && (*s))
		{
			x = evalx((char *)s,c) + 1;
			out[i] = (char *)ft_memalloc(x);
			ft_strncpy(out[i], s, x);
			s += x;
			s += tonext((char *)s,c);
		}
		i++;
	}
	out[y] = NULL;
	return(out);
}
