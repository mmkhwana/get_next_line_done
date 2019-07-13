/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:00:58 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:15:55 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *strd, const char *strs, size_t n)
{
	char		*s2;
	size_t		i;

	i = 0;
	if (strd == '\0' && strs == '\0')
		return (NULL);
	s2 = strd;
	while (strs[i] != '\0' && n > 0)
	{
		strd[i] = strs[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		strd[i] = '\0';
		i++;
		n--;
	}
	return (s2);
}
