/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:05:47 by ppreez            #+#    #+#             */
/*   Updated: 2018/06/22 16:28:36 by jpirzent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	**line;
	int		gnlret;
	int		linecount;

	linecount = 0;
	gnlret = 1;
	fd = open(argv[1], O_RDONLY);
	printf("Argc: %d\n", argc);
	printf("File to open: %s\n", argv[1]);
	line = ft_memalloc(sizeof(char **));
	printf("BUFF_SIZE: %d\n\n\n", BUFF_SIZE);
	while (gnlret > 0)
	{
		gnlret = get_next_line(fd, line);
		printf("%s\n", *line);
		linecount++;
	//	ft_putnbr(linecount);
	//	ft_putendl("");
	//	printf("gnlret = |%d|\n", gnlret);
	}
	printf("Line count: %d\n", linecount);
	printf("Finished\n\n");
	close(fd);
	return (0);
}
