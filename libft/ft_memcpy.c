/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:44:13 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 14:53:04 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char*)str;
	str2 = (char*)dst;
	i = 0;
	if (dst == NULL && str == NULL)
		return (NULL);
	while (n-- > 0)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dst);
}
