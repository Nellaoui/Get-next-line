/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:57:35 by nelallao          #+#    #+#             */
/*   Updated: 2022/11/19 20:24:49 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*new_reserve(char *reserve)
{
	int		i;
	int		j;
	char	*dest;

	if (!reserve)
		return (0);
	i = 0;
	while (reserve[i] && reserve[i] != '\n')
		i++;
	if (reserve[i] == '\n')
		i++;
	dest = malloc(sizeof(char) * (ft_strlen(reserve) - i + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while (reserve[i])
	{
		dest[j] = reserve[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	free(reserve);
	return (dest);
}

char	*get_next(char *reserve, int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	int		c;

	c = 1;
	buffer[0] = '\0';
	while (c != 0 && !ft_strchr(buffer, '\n'))
	{
		c = read(fd, buffer, BUFFER_SIZE);
		if (c < 0)
		{
			free(reserve);
			return (NULL);
		}
		buffer[c] = '\0';
		if (!reserve)
			reserve = ft_strdup(buffer);
		else
			reserve = ft_strjoin(reserve, buffer);
	}
	return (reserve);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char *reserve;

	reserve = get_next(reserve, fd);
	line = give_line(reserve);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!reserve)
		return (0);
	reserve = new_reserve(reserve);
	if (ft_strlen(line) == 0)
	{
		if (reserve)
		{
			free(reserve);
			reserve = NULL;
			free(line);
			return (0);
		}
		return (line);
	}
