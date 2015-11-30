/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:58:20 by pgourran          #+#    #+#             */
/*   Updated: 2015/11/30 12:41:44 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buf_size)
{
	unsigned int i;
	unsigned int dst_len;
	unsigned int src_len;

	dst_len = ft_strlen(dst) + 1;
	src_len = ft_strlen(src);
	i = 0;

	if (buf_size > dst_len)
	{
		while(i < (buf_size - dst_len))
		{
			dst[dst_len-1 + i] = src[i];
			i++;
		}
		dst[dst_len-1 + i] = '\0';
	}
	if (buf_size >= dst_len)
		return(dst_len + src_len - 1);
	else
		return(src_len + buf_size);



/*	while (n-- != 0 && *dst != '\0')
		dst++;
	dst_len = dst - pt_dst;
	n = buf_size - dst_len;
	if (n-- == 0)
		return (dst_len + ft_strlen(src));
	while (*src)
	{
		if (n-- != 0)
		{
			*dst = *src;
			dst++;
		}
		src++;
	}
	*dst = '\0';
	return (dst_len + (src - pt_src));
*/
}
