/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:52:46 by hben-mes          #+#    #+#             */
/*   Updated: 2022/11/30 19:08:52 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lhex(unsigned long n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n < 16)
		i += write(1, hex + n, 1);
	else if (n >= 16)
	{
		i += ft_lhex(n / 16);
		i += ft_lhex(n % 16);
	}
	return (i);
}
// int main()
// {
//     int i = 859;
//     ft_lhex(i);
// }