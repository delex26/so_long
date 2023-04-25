/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:30:11 by hben-mes          #+#    #+#             */
/*   Updated: 2023/02/18 16:58:18 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_speed(char str, int i, va_list args)
{
	if (str == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (str == 'd' || str == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (str == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (str == 'x')
		i += ft_lhex(va_arg(args, unsigned int));
	else if (str == 'X')
		i += ft_uhex(va_arg(args, unsigned int));
	else if (str == 'u')
		i += ft_putnbr_u(va_arg(args, unsigned int));
	else if (str == 'p')
	{
		i += ft_putstr("0x");
		i += ft_lhex(va_arg(args, unsigned long));
	}
	else if (str == '%')
		i += ft_putchar(str);
	else
		i += ft_putchar(str);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i = ft_speed(*str, i, args);
		}
		else
		{
			i += write(1, str, 1);
		}
		str++;
		va_end(args);
	}
	return (i);
}
// int main()
// {
//     printf("\n%d", ft_printf("%d", 123));
//     return(0);
// }