/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:31:43 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 14:41:30 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char		*zero;
	size_t		i;

	i = 0;
	zero = malloc(size);
	if (zero == NULL)
		return (NULL);
	else
		while (size != 0)
		{
			zero[i] = 0;
			i++;
			size--;
		}
	return (zero);
}
