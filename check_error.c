/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:19:33 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/01 16:50:45 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_error(t_args *arg)
{
	if (arg->player != 1)
	{
		ft_printf("Error\nCheck if there is only one player in the map.\n");
		exit(1);
	}
	else if (arg->collectible < 1)
	{
		ft_printf("Error\nCheck the number of collectibles.\n");
		exit(1);
	}
	else if (arg->exit != 1)
	{
		ft_printf("Error\nSomething wrong with the exit.\n");
		exit(1);
	}
}
