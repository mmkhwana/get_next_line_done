/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:55:21 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/07/13 03:06:15 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <unistd.h>
#include <fcntl.h>
#include "./libft/libft.h"
#include "get_next_line.h"

static int			ft_read(int fd, char **stack)
{
	char		buff[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!*stack)
			*stack = ft_strdup(buff);
		else
		{
			temp = ft_strjoin(*stack, buff);
			*stack = temp;
			free(temp);
		}
		if (*stack && ft_strchr(*stack, '\n'))
			break ;
	}
	return (ret);
}

int					get_next_line(const int fd, char **line)
{
	static char	*stack = NULL;
	char		*temp;
	int			ret;
	int			i;

	i = 0;
	ret = 2;
	if (stack == NULL)
		stack = "";
	if (!(stack) || !line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (ft_strchr(stack, '\n') == NULL)
		ret = ft_read(fd, &stack);
	if (ret < 0)
		return (-1);
	else if (ret == 0 && !*stack)
		return (0);
	else
	{
		while (stack[i] != '\n' && stack[i])
			i++;
		*line = ft_strsub(stack, 0, i);
		temp = ft_strdup(stack + i + 1);
		stack = temp;
	}
	return (1);
}