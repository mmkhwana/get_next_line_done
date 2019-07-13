/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:43:01 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:20:28 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t n)
{
	size_t		i;

	i = 0;
	if (str1 && str2)
	{
		while (str1[i] == str2[i] && n > 0)
		{
			if (str1[i] == 0)
			{
				return (1);
			}
			i++;
			n--;
		}
		if (n == 0 || (str1[i] == 0 && str2[i] == 0))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
