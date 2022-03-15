/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_dem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 01:30:49 by drgnvgr           #+#    #+#             */
/*   Updated: 2022/01/10 14:04:45 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_ud_print(unsigned int num)
{
	char	c;

	if (num < 10)
		c = num % 10 + '0';
	else if (num >= 10)
	{
		ft_ud_print(num / 10);
		c = num % 10 + '0';
	}
	write (1, &c, 1);
}

int	ft_print_unsigned_dem(va_list ap)
{
	unsigned int	num;
	int				len;

	num = va_arg(ap, unsigned int);
	ft_ud_print (num);
	len = 0;
	while (num > 9)
	{
		num = num / 10;
		len++;
	}
	return (len + 1);
}
