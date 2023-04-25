/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:32:06 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/01 17:00:37 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = (const char *)src;
	d = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > i)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
// int main()
// {
// 	char d[] = "1337leetcode";
// 	printf("%s", ft_memmove(d, d + 4, 4));
// }
