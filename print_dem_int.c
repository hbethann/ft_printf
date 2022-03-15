/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dem_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:26:34 by egor              #+#    #+#             */
/*   Updated: 2022/01/10 14:04:23 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dem_int(va_list ap)
{
	int	num;
	int	len_num;

	len_num = 0;
	num = va_arg(ap, int);
	ft_putnbr_fd(num, 1);
	if (num == -2147483648)
		return (11);
	else if ((num < 0) && (num != -2147483648))
	{
		num = num * (-1);
		len_num = 1;
	}
	while (num >= 10)
	{
		num = num / 10;
		len_num++;
	}
	return (len_num + 1);
}
