/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 03:28:54 by drgnvgr           #+#    #+#             */
/*   Updated: 2022/01/10 14:04:32 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_num(unsigned int hex_num, const char *base)
{
	char	hex_mass[20];
	int		position;
	int		len_print;

	position = 0;
	len_print = 0;
	if (hex_num < 0)
		hex_num = 4294967295 + hex_num;
	while (hex_num > 15)
	{
		hex_mass[position] = hex_num % 16;
		hex_num = hex_num / 16;
		position++;
	}
	hex_mass[position] = hex_num;
	while (position >= 0)
	{
		ft_putchar_fd(base[(int)hex_mass[position]], 1);
		len_print++;
		position--;
	}
	return (len_print);
}

int	ft_print_low_case_hex(va_list ap)
{
	char	*base;
	int		hex_num;

	base = "0123456789abcdef";
	hex_num = va_arg(ap, int);
	return (ft_print_hex_num(hex_num, base));
}

int	ft_print_up_case_hex(va_list ap)
{
	char	*base;
	int		hex_num;

	base = "0123456789ABCDEF";
	hex_num = va_arg(ap, int);
	return (ft_print_hex_num(hex_num, base));
}
