/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 21:56:09 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/30 21:56:10 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *out;
	char *pt_out;

	out = malloc(sizeof(char) * size + 1);
	if (!out)
		return (NULL);
	pt_out = out;
	while (size)
	{
		*pt_out = '\0';
		pt_out++;
		size--;
	}
	*pt_out = '\0';
	return (out);
}
