/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:08:07 by egor              #+#    #+#             */
/*   Updated: 2022/01/10 14:54:33 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list ap)
{
	char	*str;
	int		position;

	str = (char *)va_arg(ap, char *);
	if (!str)
	{
		ft_putstr_fd ("(null)", 1);
		return (6);
	}
	position = 0;
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
