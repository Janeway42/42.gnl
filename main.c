/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: janeway <janeway@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 16:44:40 by janeway       #+#    #+#                 */
/*   Updated: 2021/03/31 17:02:26 by janeway       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		get_output;
	int		row;
	char	*line;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		get_output = 1;
		row = 1;
		while (get_output)
		{
			get_output = get_next_line(fd, &line);
			if (get_output == -1)
			{
				printf("|| Return: %d || Row: %d, error\n", get_output, row);
				return (-1);
			}
			if (get_output == 0)
			{
				printf("|| Return: %d || Row: %d, Line: %s || EOF\n", get_output, row++, line);
				free(line);
				break ;
			}
			printf("|| Return: %d || Row: %d, Line: %s\n", get_output, row++, line);
			free(line);
		}
		close(fd);
		return (0);
	}
	if (argc == 1)
	{
		fd = 0;
		get_output = 1;
		while (get_output)
		{
			get_output = get_next_line(fd, &line);
			if (get_output == -1)
			{
				printf("|| Return: %d ||, error\n", get_output);
				return (-1);
			}
			if (get_output == 0)
			{
				printf("|| Return: %d || Line: %s || EOF\n", get_output, line);
				free(line);
				break ;
			}
			printf("|| Return: %d || Line: %s\n", get_output, line);
			free(line);
		}
		close(fd);
		return (0);
	}
}
