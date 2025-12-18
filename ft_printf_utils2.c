/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeqdad <toqa.meqdad@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:29:46 by tmeqdad           #+#    #+#             */
/*   Updated: 2025/12/18 16:29:46 by tmeqdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	int				count;
	unsigned long	addr;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	addr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += print_digit(addr, 16, 1);
	return (count);
}

int	print_number(long n, int base, const char *digits)
{
	unsigned long	num;
	int				count;

	if (n < 0)
		num = -n;
	else
		num = n;
	count = 0;
	if (num >= (unsigned long)base)
		count += print_number(num / base, base, digits);
	count += write(1, &digits[num % base], 1);
	return (count);
}
