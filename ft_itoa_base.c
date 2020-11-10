/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:40:13 by adenhez           #+#    #+#             */
/*   Updated: 2020/11/10 23:51:13 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*base_str(int n)
{
	char	*str;
	int		i;
	char	c;

	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	c = 'A';
	while (i < n)
	{
		if (i <= 9)
			str[i] = i + '0';
		else
			str[i] = c++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	len_predict(long n, int b_size)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		size++;
		n /= b_size;
	}
	return (size);
}

char		*ft_itoa_base(int number, int b)
{
	char		*str;
	int			neg;
	int			i;
	long		n;

	n = (long)number;
	neg = n < 0 ? 1 : 0;
	n = n < 0 ? n * -1 : n;
	if (b < 2 || !(str = malloc(sizeof(char) * (len_predict(n, b) + 1 + neg))))
		return (NULL);
	i = len_predict(n, b) + neg;
	str[i--] = '\0';
	if (n == 0)
	{
		str[i] = '0';
		return (str);
	}
	while (n > 0)
	{
		str[i--] = base_str(b)[n % b];
		n /= b;
	}
	if (neg)
		str[i] = '-';
	return (str);
}
