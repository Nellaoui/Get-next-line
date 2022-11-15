/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:58:42 by nelallao          #+#    #+#             */
/*   Updated: 2022/11/15 21:24:17 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str && str[i])
		i++;
	return (i);
}
char	*ft_strjoin(char *s1, char *s2)
{
	int		total;
	int		i;
	int		j;
	char	*point;

	total = (ft_strlen(s1) + ft_strlen(s2));
	point = (char *)malloc(sizeof(char) * (total + 1));
	if (!point)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		point[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		point[i++] = s2[j++];
	point[i] = '\0';
	free(s1);
	s1 = NULL;
	return (point);
}

char	*ft_strchr(char *scanned, int searched)
{
	int	i;

	i = 0;
	while (scanned[i] != (unsigned char)searched)
	{
		if (scanned[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)scanned + i);
}
char	*ft_strdup(char *s1)
{
	int		size;
	char	*duplicate;
	int		i;

	i = 0;
	size = ft_strlen(s1);
	duplicate = (char *)malloc(sizeof(char) * size + 1);
	if (!duplicate)
		return (NULL);
	while (s1[i])
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

char	*give_line(char *reserve)
{
	int		i;
	char	*tmp;

	i = 0;
	while (reserve[i] && reserve[i] != '\n')
		i++;
	tmp = malloc(sizeof(char) * i + 2);
	if (!tmp)
		return (NULL);
	i = 0;
	while (reserve[i] && reserve[i] != '\n')
	{
		tmp[i] = reserve[i];
		i++;
	}
	if (reserve[i] == '\n')
	{
		tmp[i] = reserve[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
char	*new_reserve(char *reserve)
{
	char *dest;
	int i;
	int j;

	i = 0;
	while (reserve[i] && reserve[i] != '\n')
		i++;
	if (reserve[i] == '\n')
		i++;
	dest = malloc(sizeof(char) * ft_strlen(reserve) - i + 1);
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