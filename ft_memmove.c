/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:34:24 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/26 23:02:18 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp;
	const unsigned char *old;
	unsigned char *new;
	unsigned int i;

	i = 0;
	tmp = (unsigned char *)malloc(len);
	old = src;
	new = dst;

	while (i < len)
	{
		tmp[i] = old[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		new[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dst);
}
