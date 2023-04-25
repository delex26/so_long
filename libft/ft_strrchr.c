/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:02:33 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/21 19:54:32 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (char)c)
			return ((char *)&s[n]);
		n--;
	}
	return (0);
}
// int main()
// {
//     char dst[] = "deadpool";
//     printf("%s\n", ft_strrchr(dst, 'd'));

// }
