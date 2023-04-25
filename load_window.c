/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:47:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/09 18:13:32 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_wall(t_args *arg)
{
	if (!arg->img.wall)
	{
		ft_printf("Error\nSomething Wrong.\n");
		exit(1);
	}
	mlx_put_image_to_window(arg->first, arg->mlx_win, arg->img.wall, 50
		* arg->x, 50 * arg->y);
}

void	put_background(t_args *arg)
{
	if (!arg->img.background)
	{
		ft_printf("Error\nSomething Wrong.\n");
		exit(1);
	}
	mlx_put_image_to_window(arg->first, arg->mlx_win, arg->img.background, 50
		* arg->x, 50 * arg->y);
}

void	put_collectibles(t_args *arg)
{
	if (!arg->img.collectible)
	{
		ft_printf("Error\nSomething Wrong.\n");
		exit(1);
	}
	mlx_put_image_to_window(arg->first, arg->mlx_win, arg->img.collectible, 50
		* arg->x, 50 * arg->y);
	arg->collectible++;
}

void	put_player(t_args *arg)
{
	if (!arg->img.player)
	{
		ft_printf("Error\nSomething Wrong.\n");
		exit(1);
	}
	arg->p_y = arg->y;
	arg->p_x = arg->x;
	mlx_put_image_to_window(arg->first, arg->mlx_win, arg->img.player, 50
		* arg->x, 50 * arg->y);
}

void	put_exit(t_args *arg)
{
	if (!arg->img.exit)
	{
		ft_printf("Error\nSomething Wrong.\n");
		exit(1);
	}
	mlx_put_image_to_window(arg->first, arg->mlx_win, arg->img.exit, 50
		* arg->x, 50 * arg->y);
}
