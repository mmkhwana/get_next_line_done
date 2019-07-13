/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:34:33 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 14:39:51 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0 && len > 0)
	{
		str[len-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
