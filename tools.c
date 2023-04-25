/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:04:06 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/03 15:28:29 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_charjoin(char *ptr, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (ptr[i])
		i++;
	str = malloc(i + 2);
	i = 0;
	while (ptr[i])
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = c;
	str[i + 1] = '\0';
	free(ptr);
	return (str);
}

void	free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
}

void	remove_char(char *str, char **ptr, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	free(str);
	free_array(ptr, count);
}
