/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:31:50 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/25 14:36:48 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	int i;
	char *out;
	char *tmp;

	i = 0;
	if ((out = (char *)malloc(sizeof(out)* ft_strlen(s1) + 1)))
	{
		tmp = out;
		while (*s1)
		{
			*tmp = f(i, *s1);
			tmp++;
			i++;
		}
	}
	return (NULL);
}
