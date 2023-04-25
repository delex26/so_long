/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:36:03 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/22 13:19:37 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len > ft_strlen (haystack))
		len = ft_strlen (haystack);
	while (i < (len))
	{
		x = i;
		j = 0;
		while (haystack[x] == needle[j] && (x < len))
		{
			x++;
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     char s[] = "heisenberg";
//     char d[] = "se";
//     printf("%s\n", ft_strnstr(s, d, 5));
//     return(0);
// }
