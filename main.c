#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char			c = 'A';
	char			*str = "Hello 42";
	char			*empty = "";
	char			*null_str = NULL;
	int				d = -42;
	int				max_d = 2147483647;
	unsigned int	u = 42;
	unsigned int	max_u = 4294967295U;
	void			*ptr = &d;
	void			*null_ptr = NULL;
	int				ret;

	printf("===== FT_PRINTF TESTS =====\n\n");

	// Characters
	ret = ft_printf("char: %c\n", c);
	ft_printf("return: %d\n\n", ret);

	// Strings
	ret = ft_printf("string: %s\n", str);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("empty string: '%s'\n", empty);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("null string: '%s'\n", null_str);
	ft_printf("return: %d\n\n", ret);

	// Pointers
	ret = ft_printf("pointer: %p\n", ptr);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("null pointer: %p\n", null_ptr);
	ft_printf("return: %d\n\n", ret);

	// Integers
	ret = ft_printf("decimal: %d\n", d);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("integer: %i\n", d);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("max int: %d\n", max_d);
	ft_printf("return: %d\n\n", ret);

	// Unsigned
	ret = ft_printf("unsigned: %u\n", u);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("max unsigned: %u\n", max_u);
	ft_printf("return: %d\n\n", ret);

	// Hex
	ret = ft_printf("hex lowercase: %x\n", u);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("hex uppercase: %X\n", u);
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("negative hex (unsigned effect): %x\n", -42);
	ft_printf("return: %d\n\n", ret);

	// Percent signs
	ret = ft_printf("percent: %%\n");
	ft_printf("return: %d\n\n", ret);

	ret = ft_printf("multiple percent: %% %% %%\n");
	ft_printf("return: %d\n\n", ret);

	// Mix
	ret = ft_printf("mix: %c %s %p %d %u %x %X %%\n",
		c, str, ptr, d, u, u, u);
	ft_printf("return: %d\n\n", ret);

	return (0);
}
