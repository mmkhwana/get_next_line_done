/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:07:56 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 15:15:53 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t	i;
	int		j;

	i = ft_strlen((const char *)str1);
	j = 0;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		++j;
	}
	str1[i] = '\0';
	return (str1);
}
