/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:34:58 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/14 10:50:34 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_display_file(int	argc, char	**argv)
{
	int		fd;
	char	buffer;
	int		r;

	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 ||
			ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 ||
			ft_strcmp(argv[1], "../") == 0)
		{
			ft_putstr(argv[1]);
			ft_putstr(": Is a directory.\n");
		}
		else if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putstr("OPEN(): An file open error occurred. No such file or directory.\n");
		}
		else
		{
			while ((r = read(fd, &buffer, 1)))
			{
				if (r == -1)
				{
					ft_putstr("READ(): A file read error has occurred. Check file permissions.\n");
					break;
				}
				else
				{
					ft_putchar(buffer);
				}
			}
			if (close(fd) == -1)
				ft_putstr("CLOSE(): An file stream close error occurred.\n");
			else
				ft_putchar('\n');
		}
	}
}
