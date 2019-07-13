/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:57:37 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 15:52:52 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *str1, char const *str2)
{
	size_t	x;
	size_t	y;
	char	*str;

	if (!str1 || !str2)
		return (NULL);
	x = ft_strlen(str1);
	y = ft_strlen(str2);
	if (!(str = (char *)malloc(sizeof(char) * (x + y + 1))))
		return (NULL);
	return (ft_strcat(ft_strcpy(str, str1), str2));
}
