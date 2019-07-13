/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:44:19 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:31:10 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	int		len;
	char	*str1;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	len = ft_strlen(str) - 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '\0')
		return (ft_strnew(0));
	while ((str[len] >= 9 && str[len] <= 13) || (str[len] == 32))
		len--;
	if (!(str1 = (char *)malloc(sizeof(char) * (len - i + 2))))
		return (NULL);
	while (i <= len)
	{
		str1[j++] = str[i];
		i++;
	}
	str1[j] = '\0';
	return (str1);
}
