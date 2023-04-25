/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:17:49 by hben-mes          #+#    #+#             */
/*   Updated: 2022/10/27 18:30:39 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_lhex(unsigned long n);
int	ft_uhex(unsigned int n);
int	ft_printf(const char *str, ...);

#endif