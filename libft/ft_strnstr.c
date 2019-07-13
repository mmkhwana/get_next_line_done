/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:19:39 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:23:55 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *stack, const char *ned, size_t len)
{
	char	*str;
	char	*s;
	size_t	i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	s = (char *)stack;
	str = (char *)ned;
	if (*str == '\0')
		return (s);
	while (s[i] != '\0' && i < len)
	{
		j = -1;
		while (str[++j] != '\0' && (i + j) < len)
			if (str[j] == s[i + j])
				c++;
		if (c == (int)ft_strlen(str))
			return (s + i);
		i++;
		c = 0;
	}
	return (NULL);
}
