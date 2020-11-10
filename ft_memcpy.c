/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:43:27 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/10 23:59:19 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t			i;

	src = (unsigned char *)source;
	dest = (unsigned char *)destination;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
