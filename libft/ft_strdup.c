/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:06:33 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 15:29:59 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str1)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(str1) + 1));
	if (str == NULL)
		return (NULL);
	return (ft_strcpy(str, str1));
}
