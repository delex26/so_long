/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_img.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:33:20 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/01 16:52:57 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_img(t_args *arg)
{
	arg->img.background = mlx_xpm_file_to_image(arg->first,
			"./img/background.xpm", &arg->img.width, &arg->img.height);
	arg->img.wall = mlx_xpm_file_to_image(arg->first, "./img/wall.xpm",
			&arg->img.width, &arg->img.height);
	arg->img.collectible = mlx_xpm_file_to_image(arg->first,
			"./img/collectible.xpm", &arg->img.width, &arg->img.height);
	arg->img.player = mlx_xpm_file_to_image(arg->first, "./img/player.xpm",
			&arg->img.width, &arg->img.height);
	arg->img.exit = mlx_xpm_file_to_image(arg->first, "./img/exit.xpm",
			&arg->img.width, &arg->img.height);
}
