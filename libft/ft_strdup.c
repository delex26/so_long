/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:02:37 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/21 16:45:31 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		s1len;
	int		i;

	i = 0;
	s1len = ft_strlen(s1);
	s2 = (char *)malloc((s1len + 1) * sizeof(char));
	if (!s2)
		return (0);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
// int main()
// {
//     char p[] = "Norwich City";
//     printf("%s", ft_strdup(p));
// }
