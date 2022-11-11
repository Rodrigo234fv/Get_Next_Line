/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:49:01 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/11 18:02:56 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*line;
	int		i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = 0;
	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		write ()
		i++;
	}
	return (line);
}


