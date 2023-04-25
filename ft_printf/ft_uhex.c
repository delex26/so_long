/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:53:27 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/27 19:42:12 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uhex(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (n < 16)
		i += write(1, hex + n, 1);
	else if (n >= 16)
	{
		i += ft_uhex(n / 16);
		i += ft_uhex(n % 16);
	}
	return (i);
}

// int main()
// {
//     int i = 859;
//     ft_uhex(i);
// }