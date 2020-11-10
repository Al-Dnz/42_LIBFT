/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:04:33 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/10 23:59:42 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	int	state;
	int	i;

	state = 0;
	i = -1;
	while (s[++i])
	{
		if (!ft_isalnum(s[i]))
			state = 0;
		else
		{
			if (state == 0)
			{
				if (s[i] >= 97 && s[i] <= 122)
					s[i] -= 32;
			}
			else
			{
				if (s[i] >= 65 && s[i] <= 90)
					s[i] += 32;
			}
			state = 1;
		}
	}
	return (s);
}
