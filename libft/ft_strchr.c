/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:55:20 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:42:38 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	cha;

	i = 0;
	cha = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == cha)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == cha)
		return ((char *)&str[i]);
	return (NULL);
}
