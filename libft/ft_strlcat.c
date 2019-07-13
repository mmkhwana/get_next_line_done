/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:22:38 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 15:55:33 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *strs, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	while (strs[i] && i + j + 1 < dstsize)
	{
		dst[j + i] = strs[i];
		i++;
	}
	dst[i + j] = '\0';
	if (j < dstsize)
		return (j + ft_strlen(strs));
	return (dstsize + ft_strlen(strs));
}
