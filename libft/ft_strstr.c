/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:00:25 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:28:14 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*s;
	char	*str;
	int		i;
	int		j;
	int		c;

	i = -1;
	c = 0;
	s = (char *)haystack;
	str = (char *)needle;
	if (*str == '\0')
		return (s);
	while (s[++i] != '\0')
	{
		j = -1;
		while (str[++j] != '\0')
			if (str[j] == s[i + j])
				c++;
		if (c == (int)ft_strlen(str))
			return (s + i);
		else
			c = 0;
	}
	return (NULL);
}
