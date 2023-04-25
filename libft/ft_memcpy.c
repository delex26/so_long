/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:36 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/01 17:00:42 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

// int main()
// {
// 	char d[] = "1337leetcode";
// 	printf("%s", ft_memcpy(d, d + 4, 4));
// }
