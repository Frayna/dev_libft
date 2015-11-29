/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:51:29 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/28 20:39:03 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_pow(int x, int pow)
{
	if (pow < 0)
		return(1 / ft_pow(x,-pow));
	if (pow == 0)
		return(1);
	while(pow - 1)
	{
		x *= x;
		pow--;
	}
	return (x);
}