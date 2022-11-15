/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:58:36 by nelallao          #+#    #+#             */
/*   Updated: 2022/11/15 15:39:57 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 8

#endif
 
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


char    *get_next_line(int fd);
int cheak_newline(char *str);
char    *ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
int give_newline(char *reserve, char *junk);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strchr(char *scanned, int searched);
char	*ft_strdup(char *s1);
char    *give_line(char *reserve);

#endif
