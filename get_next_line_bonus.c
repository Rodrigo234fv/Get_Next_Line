/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:07:50 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/14 18:32:25 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;
	int			j;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FOPEN_MAX)
		return (NULL);
	line = NULL;
	while (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		i = 0;
		j = -1;
		while (buffer[fd][i])
		{
			if (j != -1)
				buffer[fd][j++] = buffer[fd][i];
			if (buffer[fd][i] == '\n' && j == -1)
				j = 0;
			buffer[fd][i++] = 0;
		}
		if (line[ft_strlen(line) - 1] == '\n')
			break ;
	}
	return (line);
}

/* int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	return (0);
} */