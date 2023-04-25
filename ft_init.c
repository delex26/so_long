/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:04:59 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/03 12:01:30 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	define_mlx(t_args *arg)
{
	arg->first = mlx_init();
	arg->mlx_win = mlx_new_window(arg->first, 50 * arg->map_x, 50 * arg->map_y,
			"Welcome To Your Game");
	init_img(arg);
	put_stuff(arg);
}

int	close_window(t_args *arg)
{
	mlx_destroy_window(arg->first, arg->mlx_win);
	exit(1);
	return (0);
}

void	start(t_args *arg)
{
	arg->area = 0;
	arg->map_y = 0;
	arg->map_x = 0;
	arg->y = 0;
	arg->x = 0;
	arg->player = 0;
	arg->player_move = 0;
	arg->collectible = 0;
	arg->exit = 0;
}

void	check_param(int argc, char **argv)
{
	size_t	len;

	if (argc != 2)
	{
		ft_printf("Error\n Invalid Number Of Parameters.\n");
		exit(0);
	}
	len = strlen(argv[1]);
	if (!(argv[1][len - 4] == '.' && argv[1][len - 3] == 'b' && argv[1][len
			- 2] == 'e' && argv[1][len - 1] == 'r'))
	{
		ft_printf("Error\n Can't Found .ber file\n");
		exit(1);
	}
}
