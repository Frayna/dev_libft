/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 20:14:46 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/29 20:14:49 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr (const void *s, int c, size_t n)
{
	unsigned char *t;
	unsigned int i;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return (&t[i]);
	i++;
	}
return (NULL);
}
