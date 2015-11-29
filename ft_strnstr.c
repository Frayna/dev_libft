/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:42:18 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/11/26 19:40:01 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *meule, const char *aiguille, size_t n)
{
	size_t			i;
	const	char	*out;
	const	char	*init_aiguille;

	init_aiguille = aiguille;
	if (!(*aiguille) || n == 0)
		return ((char *)meule);
	while (*meule && n)
	{
		if (*meule == *aiguille)
		{
			out = meule;
			i = n;
			while ((*meule == *aiguille) && (n && *meule))
			{
				meule++;
				aiguille++;
				i++;
				n--;
			}
			if (*aiguille == '\0')
				return ((char *)out);
			if (n == 0)
				return (NULL);
			n = i;
			meule = out;
			aiguille = init_aiguille;
		}
		meule++;
		n--;
	}
	return (NULL);
}
