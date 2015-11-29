/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:07:44 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/29 18:25:01 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_intstr(int n, char *str, int len)
{
	str[len] = ((n % 10) + '0');
	if (n > 9)
		ft_intstr(n / 10, str, --len);
}

char	*ft_itoa(int n)
{
	char *str;
	int len;

	len = ft_sizeint(n) + 1;
	str = (char *)ft_memalloc(len);
	if (n == -2147483648)
	{
		str = "-2147483648";
		return(str);
	}
	len -= 2;
	if (str)
	{
		str[len] = '\0';
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
			ft_intstr(n, str, len);
		}
		else
			ft_intstr(n, str, len);
	}
	return(str);
}
