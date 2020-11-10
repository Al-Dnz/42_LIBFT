/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:00:57 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/10 22:01:03 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	res;

	res = 0;
	while (src[res])
		res++;
	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	res = dst_len <= dstsize ? res + dst_len : res + dstsize;
	i = 0;
	if (dstsize > dst_len)
	{
		while (src[i] && (i < dstsize - dst_len - 1))
		{
			dst[i + dst_len] = src[i];
			i++;
		}
		dst[i + dst_len] = '\0';
	}
	return (res);
}
