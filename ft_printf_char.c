/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 04:58:56 by egor              #+#    #+#             */
/*   Updated: 2022/01/10 14:04:00 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list ap)
{
	char	sign;

	sign = (char)va_arg(ap, int);
	ft_putchar_fd(sign, 1);
	return (1);
}
