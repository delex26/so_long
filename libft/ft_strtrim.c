/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:12:33 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/22 16:16:13 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	first_part;
	int	last_part;

	first_part = 0;
	last_part = ft_strlen(s1) - 1;
	while (s1[first_part] && in_set(s1[first_part], set))
		first_part++;
	if (first_part >= last_part)
		return (ft_strdup(""));
	while (s1[last_part] && in_set(s1[last_part], set))
		last_part--;
	if (last_part == -1)
		return (ft_substr(s1, first_part, 0));
	return (ft_substr(s1, first_part, (last_part - first_part + 1)));
}
// int main()
// {
//     char p[] = "abchelloabc";
//     printf("%s", ft_strtrim(p, "abc"));

// }