/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpopa <cpopa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:37:41 by cpopa         #+#    #+#                 */
/*   Updated: 2021/07/06 12:24:06 by janeway       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	free(s1);
	return (result);
}

/*
** copies to line from buff up to a specific character: \n
*/

char	*ft_line(const char *str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
** modified strlen to count from a specific character: \n
*/

int	ft_strlength(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

/*
** copies to a new string from a specific character: \n
*/

char	*ft_leftover(const char *str, char c)
{
	char	*dest;
	int		strlen_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strlen_str = ft_strlength(str, '\n');
	dest = malloc(sizeof(char) * (strlen_str + 1));
	if (!dest)
		return (NULL);
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		dest[j] = str[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
