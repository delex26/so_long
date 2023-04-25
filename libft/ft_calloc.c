/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:56:39 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/21 16:43:56 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	s;
	char			*ptr;

	s = count * size;
	ptr = malloc(s);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, s);
	return (ptr);
}
// int main()
// {
//     printf("%s", ft_calloc(8, 4));
// }
