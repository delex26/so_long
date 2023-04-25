/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:10:00 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/09 22:40:08 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_background(t_args *arg)
{
	arg->y = 0;
	while ((arg->y) < (arg->map_y))
	{
		arg->x = 0;
		while ((arg->x) < (arg->map_x))
		{
			mlx_put_image_to_window(arg->first, arg->mlx_win,
				arg->img.background, 50 * arg->x, 50 * arg->y);
			arg->x++;
		}
		arg->y++;
	}
}

int	count_collectibles(t_args *arg)
{
	int	i;

	i = 0;
	arg->y = 0;
	while ((arg->y) < (arg->map_y))
	{
		arg->x = 0;
		while ((arg->x) < (arg->map_x))
		{
			if (arg->map[arg->y][arg->x] == 'C')
				i++;
			arg->x++;
		}
		arg->y++;
	}
	return (i);
}

void	put_stuff(t_args *arg)
{
	arg->collectible = count_collectibles(arg);
	load_background(arg);
	arg->y = 0;
	while ((arg->y) < (arg->map_y))
	{
		arg->x = 0;
		while ((arg->x) < (arg->map_x))
		{
			if (arg->map[arg->y][arg->x] == '1')
				put_wall(arg);
			else if (arg->map[arg->y][arg->x] == 'C')
				put_collectibles(arg);
			else if (arg->map[arg->y][arg->x] == 'P')
				put_player(arg);
			else if (arg->map[arg->y][arg->x] == 'E')
				put_exit(arg);
			arg->x++;
		}
		arg->y++;
	}
	ft_printf("Move: %d\n", arg->player_move);
}
