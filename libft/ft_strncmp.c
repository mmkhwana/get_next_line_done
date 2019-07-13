/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:43:43 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:15:16 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && i < n - 1)
		i++;
	if (((unsigned char)str1[i] - (unsigned char)str2[i]) < 0)
		return (-1);
	else if (((unsigned char)str1[i] - (unsigned char)str2[i]) > 0)
		return (1);
	else
		return (0);
}
