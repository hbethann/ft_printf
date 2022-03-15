/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:52:46 by egor              #+#    #+#             */
/*   Updated: 2022/01/10 14:05:05 by hbethann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_print_for_type(va_list ap, char type_arg);
int	ft_print_dem_int(va_list ap);
int	ft_printf(const char *str, ...);
int	ft_print_low_case_hex(va_list ap);
int	ft_print_up_case_hex(va_list ap);
int	ft_printf_char(va_list ap);
int	ft_print_unsigned_dem(va_list ap);
int	ft_print_vp(va_list ap);
int	ft_print_string(va_list ap);
int	ft_print_precent(char precent);

#endif
