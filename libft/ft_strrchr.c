/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:33:24 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/07/01 08:13:33 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (0 <= i - 1)
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i--;
	}
	if (str[i] == c)
		return ((char*)&str[i]);
	i--;
	return (NULL);
}
