/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:45:05 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/10 22:45:07 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	n;
	int	i;
	int	state;

	n = 0;
	i = 0;
	state = 0;
	if (str == NULL || str[0] == 0)
		return (0);
	if (c == 0 && str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			state = 0;
		else
		{
			if (state == 0)
				n++;
			state = 1;
		}
		i++;
	}
	return (n);
}

static int	size_word(const char *s, int i, char c)
{
	int	n;

	n = 0;
	while (s[i] != c && s[i++])
		n++;
	return (n);
}

char		**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!(tab = malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (i < count_words(s, c))
	{
		while (s[k] == c)
			k++;
		if (!(tab[i] = malloc(sizeof(char) * (size_word(s, k, c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] != c && s[k] != 0)
			tab[i][j++] = s[k++];
		tab[i++][j] = '\0';
		while (s[k] == c)
			k++;
	}
	tab[i] = NULL;
	return (tab);
}
