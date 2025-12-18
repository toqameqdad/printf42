/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeqdad <toqa.meqdad@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:01:11 by tmeqdad           #+#    #+#             */
/*   Updated: 2025/12/18 16:01:11 by tmeqdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

int		print_format(char specifier, va_list ap);
int		print_char(char c);
int		print_str(char *s);
int		print_digit(long num, int base, int mode);
int		print_pointer(void *ptr);
int		print_number(long n, int base, const char *digits);

char	*get_digits(int mode);

#endif
