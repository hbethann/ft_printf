/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:58:49 by egor              #+#    #+#             */
/*   Updated: 2022/01/10 14:49:24 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_nontype(char c, int position)
{
	write(1, &c, 1);
	position++;
}

static int	get_type(int t_o_a)
{
	if (t_o_a != '\0')
	{
		if (t_o_a == 'c')
			return (t_o_a);
		else if (t_o_a == 's')
			return (t_o_a);
		else if (t_o_a == 'p')
			return (t_o_a);
		else if (t_o_a == 'd')
			return (t_o_a);
		else if (t_o_a == 'i')
			return (t_o_a);
		else if (t_o_a == 'u')
			return (t_o_a);
		else if (t_o_a == 'x')
			return (t_o_a);
		else if (t_o_a == 'X')
			return (t_o_a);
		else if (t_o_a == '%')
			return (t_o_a);
	}	
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		position;
	int		re_len;
	char	t_o_a;
	va_list	ap;

	va_start(ap, str);
	position = 0;
	re_len = 0;
	while (str[position] != '\0')
	{
		if (str[position] == '%')
		{
			t_o_a = get_type(str[position + 1]);
			re_len += ft_print_for_type(ap, t_o_a);
			position += 1;
		}
		else
		{
			ft_print_nontype(str[position], position);
			re_len++;
		}
		position++;
	}
	va_end(ap);
	return (re_len);
}
