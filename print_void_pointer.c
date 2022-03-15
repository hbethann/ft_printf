/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:45:06 by drgnvgr           #+#    #+#             */
/*   Updated: 2022/01/10 14:04:50 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_p_hex(unsigned long long hex_num, char *base)
{
	char	mass_hex[20];
	int		position;
	int		len;

	position = 0;
	len = 0;
	while (hex_num > 15)
	{
		mass_hex[position] = hex_num % 16;
		hex_num = hex_num / 16;
		position++;
	}
	mass_hex[position] = hex_num;
	while (position >= 0)
	{
		ft_putchar_fd(base[(int)mass_hex[position]], 1);
		len++;
		position--;
	}
	return (len);
}

int	ft_print_vp(va_list ap)
{
	unsigned long long	pointer;

	pointer = (unsigned long long)va_arg(ap, void *);
	if (!pointer)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		return (ft_print_p_hex(pointer, "0123456789abcdef") + 2);
	}
}
