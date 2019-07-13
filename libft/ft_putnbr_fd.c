/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:26:49 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 15:08:59 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * (-1), fd);
	}
	else if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
