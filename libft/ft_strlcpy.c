/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:28:00 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/20 17:33:06 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	if (size == 0)
		return (n);
	else
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (n);
}
// int main()
// {
// 	char src[] = "pic";
// 	char dest[] = "world";
// 	printf("%d", ft_strlcpy(dest, src, 5));
// }