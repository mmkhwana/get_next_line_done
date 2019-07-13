/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:55:14 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 15:22:37 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		++i;
	if (((unsigned char)str1[i] - (unsigned char)str2[i]) > 0)
		return (1);
	else if (((unsigned char)str1[i] - (unsigned char)str2[i]) < 0)
		return (-1);
	else
		return (0);
}
