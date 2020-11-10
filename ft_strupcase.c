/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:08:25 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/11 00:04:47 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupcase(char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			str[i] = s[i] - 32;
		else
			str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
