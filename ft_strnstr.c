/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:07:44 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/11 00:04:28 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	i = 0;
	s2_len = 0;
	while (s2[s2_len])
		s2_len++;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && s1[i + j] && j + i < len)
			j++;
		if (j == s2_len)
			return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}
