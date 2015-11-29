/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:29:07 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/29 16:36:53 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (1);
	while ((s1[i] == s2[i]) && *s1 && *s2 && (i < n))
		i++;
	if (n == i)
		return (1);
	return(0);
}
