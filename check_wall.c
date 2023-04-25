/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:05:41 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/07 16:32:14 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wall_error(void)
{
	ft_printf("Error!\nYour Wall Is Incomplete.\n");
	exit(1);
}

void	x_wall(t_args *arg)
{
	while ((arg->x) < (arg->map_x))
	{
		if (arg->map[0][arg->x] != '1')
			wall_error();
		arg->x++;
	}
	arg->y = arg->map_y - 1;
	arg->x = 0;
	while ((arg->x) < (arg->map_x))
	{
		if (arg->map[arg->y][arg->x] != '1')
			wall_error();
		arg->x++;
	}
}

void	y_wall(t_args *arg)
{
	arg->x = 0;
	arg->y = 0;
	while ((arg->y) < (arg->map_y))
	{
		if (arg->map[arg->y][0] != '1')
			wall_error();
		arg->y++;
	}
	arg->y = 0;
	arg->x = arg->map_x - 1;
	while ((arg->y) < (arg->map_y))
	{
		if (arg->map[arg->y][arg->x] != '1')
			wall_error();
		arg->y++;
	}
}
