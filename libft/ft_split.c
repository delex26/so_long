/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:21:51 by hben-mes          #+#    #+#             */
/*   Updated: 2023/02/27 13:20:24 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			++i;
		if (s[i])
		{
			while (s[i] != c && s[i])
				++i;
			++r;
		}
	}
	return (r);
}

char	*ft_count_letters(char const *s, char c)
{
	int		i;
	char	*l;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	l = (char *)ft_calloc(1, (i + 1));
	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		l[i] = s[i];
		i++;
	}
	return (l);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		word;
	int		j;

	j = 0;
	if (!s)
		return (0);
	word = count_words(s, c);
	p = (char **)ft_calloc(sizeof(char *), (word + 1));
	if (!p)
		return (0);
	while (*s)
	{
		while (*s == c)
		s++;
		if (*s != c && *s)
			p[j] = ft_count_letters(s, c);
		while (*s != c && *s)
			s++;
		j++;
	}
	return (p);
}
// int main(void)
// {
//     char s[50] = "     1337 leet code";
//     char **p = ft_split(s, ' ');
//     int i = 0;
//     while (p[i])
//         printf("%s\n", p[i++]);
//     return (0);
// }
