/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:25:23 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 14:55:41 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *str, size_t n)
{
	char		*str1;
	char		*str2;
	size_t		i;

	str1 = (char *)str;
	str2 = (char *)dst;
	i = n;
	if (str1 < str2)
		while (i--)
		{
			str2[i] = str1[i];
		}
	else
		ft_memcpy(str2, str1, n);
	return (dst);
}
