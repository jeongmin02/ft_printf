/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerhee <jerhee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:22:57 by jerhee            #+#    #+#             */
/*   Updated: 2022/08/19 19:02:35 by jerhee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf
# define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>

int	check_type(char c, va_list ap);
int ft_printf(const char *format, ...);
int	print_char(char c, va_list ap);
int	print_string(char c, va_list ap);
int	print_num(char c, va_list ap);
int	print_hex(char c, va_list ap);
int	print_percent(char c, va_list ap);

#endif