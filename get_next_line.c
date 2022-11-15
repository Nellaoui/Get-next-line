/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:57:35 by nelallao          #+#    #+#             */
/*   Updated: 2022/11/15 21:36:48 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
get_next_line function read a file and return the line with a newline
newline charachter from a file descriptor.
so whenever call get_next_line static varible is used is remember the pervious fucnction call.
in first we cheak if it static variable is empty 
*/
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*reserve;
	char		*line;
	char		buffer[BUFFER_SIZE + 1];
	int			c;

	c = 1;
	while (c != 0 && !ft_strchr(buffer, '\n'))
	{
		c = read(fd, buffer, BUFFER_SIZE);
		if (c < 0)
		{
			free(reserve);
			reserve = NULL;
		}
		buffer[c] = '\0';
		if (!reserve)
			reserve = ft_strdup(buffer);
		else
			reserve = ft_strjoin(reserve, buffer);
	}
	line = give_line(reserve);
	reserve = new_reserve(reserve);
	if (c == 0)
	{
		if (buffer[c] == '\0')
			return (NULL);
	}
	return (line);
}
// int	main(void)
// {
// 	int fd;

// 	fd = open("text.txt", O_RDWR);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// }