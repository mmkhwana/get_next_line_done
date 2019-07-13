/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:29:07 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 14:43:26 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *strd, const void *strs, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*str;
	size_t			i;

	i = 0;
	dst = (unsigned char *)strd;
	str = (unsigned char *)strs;
	while (n-- > 0)
	{
		dst[i] = str[i];
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)strd + i + 1);
		i++;
	}
	return (NULL);
}
