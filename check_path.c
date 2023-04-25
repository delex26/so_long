/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:06:06 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/03 15:17:28 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	valid_path(int y, int x, t_args *arg)
{
	if (arg->map[y][x] == 'E')
		arg->exit_path++;
	if (y < 0 || y > arg->map_y || x < 0 || x > arg->map_x
		|| arg->map[y][x] == '1' || arg->map[y][x] == 'E')
		return ;
	if (arg->map[y][x] == 'C')
		arg->collectible_path++;
	arg->map[y][x] = '1';
	valid_path(y, (x - 1), arg);
	valid_path(y, (x + 1), arg);
	valid_path((y - 1), x, arg);
	valid_path((y + 1), x, arg);
	return ;
}

void	check_path(t_args *arg)
{
	arg->y = 0;
	while ((arg->y) < (arg->map_y))
	{
		arg->x = 0;
		while ((arg->x) < (arg->map_x))
		{
			if (arg->map[arg->y][arg->x] == 'P')
			{
				valid_path(arg->y, arg->x, arg);
				if (arg->collectible == arg->collectible_path && arg->exit_path)
				{
					arg->x = 0;
					arg->y = 0;
					return ;
				}
				else
				{
					ft_printf("Error\n There Is No Valid Path");
					exit(1);
				}
			}
			arg->x++;
		}
		arg->y++;
	}
}
