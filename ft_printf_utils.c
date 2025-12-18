/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeqdad <toqa.meqdad@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:01:42 by tmeqdad           #+#    #+#             */
/*   Updated: 2025/12/18 16:01:42 by tmeqdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

int	print_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		count += write(1, s, 1);
		s++;
	}
	return (count);
}

char	*get_digits(int mode)
{
	if (mode == 2)
		return ("0123456789ABCDEF");
	return ("0123456789abcdef");
}

int	print_digit(long num, int base, int mode)
{
	unsigned long	n;
	int				count;
	char			*digits;

	count = 0;
	digits = get_digits(mode);
	if (mode == 0 && num < 0)
	{
		count += write(1, "-", 1);
		n = (unsigned long)(-num);
	}
	else
		n = (unsigned long)num;
	count += print_number(n, base, digits);
	return (count);
}
