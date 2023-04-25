/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:38:25 by hben-mes          #+#    #+#             */
/*   Updated: 2023/02/22 15:58:42 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*str;

	a = 0;
	str = ((unsigned char *)b);
	while (a < len)
	{
		str[a] = c;
		a++;
	}
	return (str);
}
// int main()
// {
// 	char p[] = "hello";
// 	printf("%s", ft_memset(p, 'h', 3));
// }