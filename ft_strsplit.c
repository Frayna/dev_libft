/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:58:20 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/27 16:27:40 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char *str;

	str = (char *)s;
	c++;
	c--;
	str++;
	str--;
/*while (*ptr)
{
	while (*ptr == c)
		ptr++;
	i = ft_strchr(ptr, c);
	str = malloc();

}
*/
	return(NULL);
}

