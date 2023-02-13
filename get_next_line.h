/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:00:49 by rugrigor          #+#    #+#             */
/*   Updated: 2023/02/13 15:33:02 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char		*get_next_line(int fd);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlen(const char *str);
char		*ft_strchr(char *str, int n);
char		*ft_strjoin(char const *s1, char const *s2);
char		*strn(char *ptr);
char		*strn2(char *ptr);
char		*ft_strdup(const char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif
