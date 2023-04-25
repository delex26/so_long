/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:13:26 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/03 13:10:51 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	valid_map(char **argv, t_args *arg)
{
	int		fd;
	char	*buff;
	char	**map_x;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error!\nImpossible to read the file");
		exit(1);
	}
	buff = read_map(fd);
	arg->map = ft_split(buff, '\n');
	map_x = arg->map;
	while (arg->map[0][arg->map_x] != '\0')
		arg->map_x++;
	check_characters(buff, arg);
	check_map(buff, arg);
	check_path(arg);
	arg->map = ft_split(buff, '\n');
	remove_char(buff, map_x, '\n');
	close(fd);
}

int	main(int argc, char **argv)
{
	t_args	arg;

	start(&arg);
	check_param(argc, argv);
	valid_map(argv, &arg);
	define_mlx(&arg);
	mlx_hook(arg.mlx_win, 2, 0, keyboard, &arg);
	mlx_hook(arg.mlx_win, 17, 0, close_window, &arg);
	mlx_loop(arg.first);
	exit(0);
	return (0);
}
