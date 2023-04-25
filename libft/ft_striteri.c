/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:03:58 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/23 11:21:06 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void change(unsigned int i, char *t)
// {
// 	*t -= 32;
// }
// // int main()
// // {
// // 	char s[6] = "amine";
// // 	int	i = 0;
// // 	ft_striteri(s, change);
// // 	printf("%s", s);
// // 	return (0);
// // }
