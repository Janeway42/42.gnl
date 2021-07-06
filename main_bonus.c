/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_bonus.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: janeway <janeway@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 13:07:38 by janeway       #+#    #+#                 */
/*   Updated: 2021/07/06 11:19:46 by janeway       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd_1;
	int		fd_2;
	char	*line;
	int		get_output1;
	int		get_output2;

	if (argc == 3)
	{
		fd_1 = open(argv[1], O_RDONLY);
		fd_2 = open(argv[2], O_RDONLY);
		get_output1 = 1;
		get_output2 = 1;
		while (get_output1 || get_output2)
		{
			get_output1 = get_next_line(fd_1, &line);
			if (get_output1 == -1)
			{
				printf("error reading file\n");
				return (-1);
			}
			if (get_output1 == 0)
			{
				printf("FD: %d || Return: %d || Line: %s || EOF\n", fd_1, get_output1, line);
				free(line);
				break ;
			}
			printf("FD: %d || Return: %d || Line: %s\n", fd_1, get_output1, line);
			free(line);
			get_output2 = get_next_line(fd_2, &line);
			if (get_output2 == -1)
			{
				printf("error reading file\n");
				return (-1);
			}
			if (get_output2 == 0)
			{
				printf("FD: %d || Return: %d || Line: %s || EOF\n", fd_2, get_output2, line);
				free(line);
				break ;
			}
			printf("FD: %d || Return: %d || Line: %s\n", fd_2, get_output2, line);
			free(line);
		}
		close(fd_1);
		close(fd_2);
		return (0);
	}
	if (argc == 2)
	{
		fd_1 = open(argv[1], O_RDONLY);
		fd_2 = 0;
		get_output1 = 1;
		get_output2 = 1;
		while (get_output1 || get_output2)
		{
			get_output1 = get_next_line(fd_1, &line);
			if (get_output1 == -1)
			{
				printf("error reading file\n");
				return (-1);
			}
			if (get_output1 == 0)
			{
				printf("FD: %d || Return: %d || Line: %s || EOF\n", fd_1, get_output1, line);
				free(line);
				break ;
			}
			printf("FD: %d || Return: %d || Line: %s\n", fd_1, get_output1, line);
			free(line);
			get_output2 = get_next_line(fd_2, &line);
			if (get_output2 == -1)
			{
				printf("error reading file\n");
				return (-1);
			}
			if (get_output2 == 0)
			{
				printf("FD: %d || Return: %d || Line: %s || EOF\n", fd_2, get_output2, line);
				free(line);
				break ;
			}
			printf("FD: %d || Return: %d || Line: %s\n", fd_2, get_output2, line);
			free(line);
		}
		close(fd_1);
		close(fd_2);
		return (0);
	}
}
