/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:45:24 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/29 16:36:32 by tifuzeau         ###   ########.fr       */
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
