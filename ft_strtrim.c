/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:08:13 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/10 23:08:17 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_include(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	size_predict(char const *s, char const *set)
{
	int	i;
	int	size;

	size = 0;
	while (s[size])
		size++;
	i = 0;
	while (is_include(s[i++], set))
		size--;
	while (s[i])
		i++;
	i--;
	while (is_include(s[i--], set))
		size--;
	return (size);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char*)s1);
	str = malloc(sizeof(char) * (size_predict(s1, set)) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && is_include(s1[i], set))
		i++;
	j = 0;
	while (j < size_predict(s1, set))
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}
