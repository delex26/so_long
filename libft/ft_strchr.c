/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:50:02 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/21 15:36:51 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	int		i;

	src = (char *)s;
	i = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
			return (&src[i]);
		i++;
	}
	if (src[i] == (char)c)
		return (&src[i]);
	return (0);
}
