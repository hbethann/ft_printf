/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_for_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 02:57:27 by egor              #+#    #+#             */
/*   Updated: 2022/01/10 14:03:40 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_for_type(va_list ap, char type_arg)
{
	if (type_arg == 'c')
		return (ft_printf_char(ap));
	else if (type_arg == 's')
		return (ft_print_string(ap));
	else if (type_arg == 'p')
		return (ft_print_vp(ap));
	else if (type_arg == 'd')
		return (ft_print_dem_int(ap));
	else if (type_arg == 'i')
		return (ft_print_dem_int(ap));
	else if (type_arg == 'u')
		return (ft_print_unsigned_dem(ap));
	else if (type_arg == 'x')
		return (ft_print_low_case_hex(ap));
	else if (type_arg == 'X')
		return (ft_print_up_case_hex(ap));
	else if (type_arg == '%')
		return (ft_print_precent('%'));
	return (0);
}
