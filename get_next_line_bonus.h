/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpopa <cpopa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:37:53 by cpopa         #+#    #+#                 */
/*   Updated: 2021/01/23 19:33:07 by janeway       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

int		get_next_line(int fd, char **line);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_line(const char *str, char c);
char	*ft_leftover(const char *str, char c);
int		ft_strlength(const char *str, char c);
size_t	ft_strlen(const char *str);

#endif
