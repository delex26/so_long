/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:17:09 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/21 22:39:16 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	l;

	l = 0;
	if (!s)
		return (0);
	if (start > ft_strlen((char *)s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (s[start] && l < len)
	{
		ptr[l] = s[start];
		start++;
		l++;
	}
	ptr[l] = '\0';
	return (ptr);
}
// int main()
// {
//     char const p[] = "hello world";
//     printf("%s", ft_substr(p, 0, 10));
// }
