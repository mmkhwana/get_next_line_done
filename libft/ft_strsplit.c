/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 07:26:44 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:26:31 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_row(char *s, int col, int pos)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (col + 1));
	if (!str)
		return (str);
	while (i < col)
	{
		str[i] = s[pos];
		i++;
		pos++;
	}
	str[col] = '\0';
	return (str);
}

static int	ft_len(char *str, char c)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
			len++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (len);
}

static char	**ft_str_array(char **str1, char *str, char c)
{
	int		i;
	int		x;
	int		j;

	i = 0;
	j = 0;
	x = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] != '\0' && str[i] != c)
			i++;
		if (i > j)
		{
			str1[x] = ft_row((char *)str, i - j, j);
			x++;
		}
	}
	str1[x] = 0;
	return (str1);
}

char		**ft_strsplit(char const *str, char c)
{
	int		len;
	char	**str1;

	if (!str)
		return (NULL);
	len = ft_len((char *)str, c);
	str1 = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str1)
		return (str1);
	return (ft_str_array(str1, (char *)str, c));
}
