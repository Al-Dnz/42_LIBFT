/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:43:42 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/12 22:49:24 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

//	if (s == NULL)
//		return (NULL);
	str = (unsigned char *)s;
	while (n--)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (s);
}
