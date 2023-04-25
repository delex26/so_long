/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:07:05 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/03 12:20:59 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map(char *buff, t_args *arg)
{
	int	len;

	len = ft_strlen(buff);
	if (arg->unknown_character)
	{
		ft_printf("Error\n unknown character in the map");
		exit(1);
	}
	arg->area = len - arg->map_y;
	if (buff[len - 1] != '\n')
	{
		arg->map_y++;
	}
	if (arg->area != arg->map_x * arg->map_y)
	{
		ft_printf("Error!\nIncorrect map size.\n");
		exit(1);
	}
	x_wall(arg);
	y_wall(arg);
}

void	check_characters(char *buff, t_args *arg)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == 'P')
			arg->player++;
		else if (buff[i] == 'C')
			arg->collectible++;
		else if (buff[i] == 'E')
			arg->exit++;
		else if (buff[i] == '\n')
			arg->map_y++;
		else if (buff[i] != '0' && buff[i] != '1')
			arg->unknown_character++;
		i++;
	}
	check_error(arg);
}

char	*read_map(int fd)
{
	char	buff;
	char	*ptr;
	int		res;

	ptr = NULL;
	if (fd < 0)
		return (NULL);
	ptr = malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	while (1)
	{
		res = read(fd, &buff, 1);
		if ((res == 0 && ptr[0] == '\0') || res < 0)
		{
			free(ptr);
			ft_printf("Error\nEmpty map");
			return (NULL);
		}
		if (res == 0)
			break ;
		ptr = ft_charjoin(ptr, buff);
	}
	return (ptr);
}
