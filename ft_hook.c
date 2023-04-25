/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:17:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/04 10:55:32 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	up(t_args *arg)
{
	arg->map[arg->p_y][arg->p_x] = '0';
	arg->map[arg->p_y - 1][arg->p_x] = 'P';
	arg->player_move++;
	put_stuff(arg);
}

void	down(t_args *arg)
{
	arg->map[arg->p_y][arg->p_x] = '0';
	arg->map[arg->p_y + 1][arg->p_x] = 'P';
	arg->player_move++;
	put_stuff(arg);
}

void	left(t_args *arg)
{
	arg->map[arg->p_y][arg->p_x] = '0';
	arg->map[arg->p_y][arg->p_x - 1] = 'P';
	arg->player_move++;
	put_stuff(arg);
}

void	right(t_args *arg)
{
	arg->map[arg->p_y][arg->p_x] = '0';
	arg->map[arg->p_y][arg->p_x + 1] = 'P';
	arg->player_move++;
	put_stuff(arg);
}

int	keyboard(int keycode, t_args *arg)
{
	if (keycode == 53)
		close_window(arg);
	if (arg->collectible == 0 && ((keycode == 2 && arg->map[arg->p_y][arg->p_x
				+ 1] == 'E') || (keycode == 1 && arg->map[arg->p_y
				+ 1][arg->p_x] == 'E') || (keycode == 0
				&& arg->map[arg->p_y][arg->p_x - 1] == 'E') || (keycode == 13
				&& arg->map[arg->p_y - 1][arg->p_x] == 'E')))
	{
		ft_printf("CONGRATS. YOU WON\n");
		close_window(arg);
	}
	if (keycode == 13 && arg->map[arg->p_y - 1][arg->p_x] != '1'
		&& arg->map[arg->p_y - 1][arg->p_x] != 'E')
		up(arg);
	if (keycode == 0 && arg->map[arg->p_y][arg->p_x - 1] != '1'
		&& arg->map[arg->p_y][arg->p_x - 1] != 'E')
		left(arg);
	if (keycode == 1 && arg->map[arg->p_y + 1][arg->p_x] != '1'
		&& arg->map[arg->p_y + 1][arg->p_x] != 'E')
		down(arg);
	if (keycode == 2 && arg->map[arg->p_y][arg->p_x + 1] != '1'
		&& arg->map[arg->p_y][arg->p_x + 1] != 'E')
		right(arg);
	return (0);
}
